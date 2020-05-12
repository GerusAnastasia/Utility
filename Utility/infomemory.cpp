#include <Windows.h>
#include <string>
#include <iostream>
#include "infomemory.h"

using namespace std;
string InfoMemory::getTotalPhys() const
{
    return totalPhys;
}

string InfoMemory::getAvailPhys() const
{
return availPhys;
}

string InfoMemory::getMemoryLoad() const
{
return memoryLoad;
}

string InfoMemory::getTotalVirt() const
{
return totalVirt;
}

string InfoMemory::getAvailVirt() const
{
    return availVirt;
}



void InfoMemory:: getStatus(){

    _MEMORYSTATUSEX ms;
    ms.dwLength=sizeof(ms);
        GlobalMemoryStatusEx(&ms);
        memoryLoad = to_string(static_cast<unsigned long long>(ms.dwMemoryLoad))+"%";
        totalPhys =  to_string(static_cast<unsigned long long>(ms.ullTotalPhys/(1024*1024)))+" MB";
        availPhys =  to_string(static_cast<unsigned long long>(ms.ullAvailPhys/(1024*1024)))+" MB";
        totalVirt = to_string(static_cast<unsigned long long>(ms.ullTotalPageFile/(1024*1024)))+" MB";
        availVirt = to_string(static_cast<unsigned long long>(ms.ullAvailPageFile/(1024*1024)))+" MB";

}
