#include <string.h>
#include <windows.h>
#include <infowindow.h>
#include <versionhelpers.h>

using namespace std;

string InfoWindow::getRole() const
{
return role;
}

string InfoWindow::getVersion() const
{
    return version;
}

void InfoWindow::getStatus()
{
        RTL_OSVERSIONINFOEXW *pk_OsVer = new RTL_OSVERSIONINFOEXW;
        typedef LONG(WINAPI* tRtlGetVersion)(RTL_OSVERSIONINFOEXW*);
        memset(pk_OsVer, 0, sizeof(RTL_OSVERSIONINFOEXW));
        pk_OsVer->dwOSVersionInfoSize = sizeof(RTL_OSVERSIONINFOEXW);
        HMODULE h_NtDll = GetModuleHandleW(L"ntdll.dll");
        tRtlGetVersion f_RtlGetVersion = (tRtlGetVersion)GetProcAddress(h_NtDll, "RtlGetVersion");

        if (!f_RtlGetVersion);
        LONG Status = f_RtlGetVersion(pk_OsVer);
        if (Status == 0)

        switch(pk_OsVer->dwMajorVersion){
        case 5: {
            switch(pk_OsVer->dwMinorVersion){
            case 0:{
                version="Windows 2000";
                break;
            }
            case 1:{
                version="Windows XP";
                break;
            }
            case 2:{
               if(	GetSystemMetrics(SM_SERVERR2) != 0)
               {
                   version="Windows Server 2003 R2";
                   break;
               }
               if(pk_OsVer->wSuiteMask & VER_SUITE_WH_SERVER)
               {
                   version="Windows Home Server";
                   break;
               }
               if(GetSystemMetrics(SM_SERVERR2) == 0)
               {
                   version="Windows Server 2003 R2";
                   break;
               }
               version= "Windows XP Professional x64 Edition";
               break;
            }

          }
             break;
        }
        case 6:  {
                switch(pk_OsVer->dwMinorVersion){
                    case 0:{
                        if(pk_OsVer->wProductType==VER_NT_WORKSTATION)
                            version="Windows Vista";
                        else
                            version="Windows Server 2008";
                        break;

                    }
                    case 1:{
                        if(pk_OsVer->wProductType==VER_NT_WORKSTATION)
                            version="Windows 7";
                        else
                            version="Windows Server 2008 RS2";
                        break;

                    }

                    case 2:{
                        if(pk_OsVer->wProductType==VER_NT_WORKSTATION)
                            version="Windows 8.1";
                        else
                            version="Windows Server 2012";
                        break;
                    }

                    case 3:{
                        if(pk_OsVer->wProductType==VER_NT_WORKSTATION)
                            version="Windows 8.1";
                        else
                            version="Windows Server 2012 RS2";
                        break;
                    }
                break;
            }
                break;
        }
        case 10: {
            if(pk_OsVer->wProductType==VER_NT_WORKSTATION)
                version="Windows 10";
            else
                version="Windows Server 2016";
            break;
        }

         break;
   }

   version=version+" (build" + to_string(pk_OsVer->dwBuildNumber)+")";
   switch(pk_OsVer->wProductType){
   case VER_NT_WORKSTATION: role="Workstation"; break;
   case VER_NT_SERVER: role="Server"; break;
   case VER_NT_DOMAIN_CONTROLLER: role="Donaim controller"; break;
   default: role="Unknow";
   delete pk_OsVer;
   }
}



