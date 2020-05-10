#include <iostream>
#include <string>
#include "infonames.h"
using namespace std;

string InfoNames::getUserName() const
{
    return userName;
}

string InfoNames::getComputerName() const
{
return computerName;
}

std::string InfoNames:: wstrtostr(const std::wstring &wstr)
{
    std::string strTo;
    char *szTo = new char[wstr.length() + 1];
    szTo[wstr.size()] = '\0';
    WideCharToMultiByte(CP_ACP, 0, wstr.c_str(), -1, szTo, (int)wstr.length(), NULL, NULL);
    strTo = szTo;
    delete[] szTo;
    return strTo;
}

void InfoNames::getStatus(){
    TCHAR scComputerName [ MAX_COMPUTERNAME_LENGTH*2 + 1];
    DWORD lnNameLength = MAX_COMPUTERNAME_LENGTH*2;
    GetComputerNameEx ( ComputerNameNetBIOS , scComputerName , & lnNameLength );
    computerName=wstrtostr(scComputerName);
    TCHAR tuserName [ UNLEN + 1];
    DWORD nULen = UNLEN ;
    GetUserName(tuserName , &nULen );
    userName=wstrtostr(tuserName);
}
