#include <windows.h>
#include <iostream>
#include <stdio.h>
#include <tlhelp32.h>
#include "infovolumes.h"
#include <string>

int InfoVolumes::getCount() const
{
    return count;
}

std::string InfoVolumes:: wstrtostr(const std::wstring &wstr)
{

    std::string strTo;
    char *szTo = new char[wstr.length() + 1];
    szTo[wstr.size()] = '\0';
    WideCharToMultiByte(CP_ACP, 0, wstr.c_str(), -1, szTo, (int)wstr.length(), NULL, NULL);
    strTo = szTo;
    delete[] szTo;
    return strTo;
}

string InfoVolumes:: calc(unsigned long int num,int base)
 {
     string s;
     char buf[9]= {'0','0','0','0','0','0','0','0','0'};
     int i=0;
     while (num > 0)
     {
     int rem = num % base;
     if (rem <= 9 && rem>=0)
         {
              buf[i]=(char)(rem+'0');
              i++;
             num=num/base;

         }
     else
         {
             buf[i]= char(rem - 10 + 'A');
             i++;
             num= num/base;

         }
      }
     char b[9];
     buf[8]='\0';
     for(i=0; i<8;i++)
         b[i]=buf[7-i];
     b[8]='\0';
     s=b;
     return s;
 }

void InfoVolumes:: getStatus(){
    TCHAR szFileSystem [ MAX_PATH + 1];
    DWORD dwSerialNumber ;
    TCHAR szDrives [ MAX_PATH + 1];
    GetLogicalDriveStrings ( MAX_PATH , szDrives );

    TCHAR *pLetter = szDrives ;
    BOOL bSuccess;
    DWORD nsc, nbs, nfc, ncu;
    double nf;
    int i=0;
    while   (*pLetter || i>=SIZE )   {
        GetDiskFreeSpace(pLetter, &nsc, &nbs, &nfc, &ncu );
        bSuccess   =   GetVolumeInformation(pLetter ,   //   The   source
        NULL ,   NULL ,	//   Volume   Label   ( LABEL)
        &dwSerialNumber, NULL ,   //   Serial   Number   ( VOL)
        NULL,
        szFileSystem, MAX_PATH );   //   File   System   ( NTFS ,   FAT ...)
        wstring w;
        w=*pLetter;
        diskName[i]=wstrtostr(w);

        if ( bSuccess ) {
            nf = (double) nfc * (double) nsc * (double) nbs;
            nf = nf /1024.0 /1024/1024;
            freeSpace[i]=to_string(nf)+" GB";
            tomNumber[i]= calc(dwSerialNumber,16);
            w=szFileSystem;
            fileSystem[i]=wstrtostr(w);
            i++;

        }
        else{
            fileSystem[i]="--//--";
            freeSpace[i]="--//--";
            tomNumber[i]="--//--";
            i++;
            }

        while(*++ pLetter );	//   Notice   Semi - colon!
            pLetter ++;
    }
    count=i;
}

string InfoVolumes::getDiskName(int i) const{
    return diskName[i];
}

string InfoVolumes::getFileSystem(int i) const{
    return fileSystem[i];
}

string InfoVolumes::getFreeSpace(int i) const{
    return freeSpace[i];
}

string InfoVolumes::getTomNumber(int i) const{
    return tomNumber[i];
}
