#include <Windows.h>
#include <string>
#include <iostream>
#include "infocpu.h"

using namespace std;


string InfoCPU::getProcArchitecture() const
{
    return procArchitecture;
}

string InfoCPU::getProcType() const
{
return procType;
}

string InfoCPU::getNumberOfProcessors() const
{
    return numberOfProcessors;
}

 string InfoCPU::getCPUName(){
    int CPUInfo[4] = {-1};
    __cpuid(CPUInfo, 0x80000000);
    unsigned int nExIds = CPUInfo[0];

    char* CPUBrandString = new char [0x40];

    for(unsigned int i = 0x80000000; i<=nExIds; ++i){
        __cpuid(CPUInfo, i);

        if(i == 0x80000002){
            memcpy(CPUBrandString, CPUInfo, sizeof (CPUInfo));
        } else if(i == 0x80000003){
            memcpy(CPUBrandString + 16, CPUInfo, sizeof (CPUInfo));
        }else if(i == 0x80000004){
            memcpy(CPUBrandString + 32, CPUInfo, sizeof (CPUInfo));
        }
    }

     string ret (CPUBrandString);
     delete[] CPUBrandString;
     return ret;
}

void InfoCPU::getStatus(){
    _SYSTEM_INFO si;
    GetSystemInfo(&si);
    numberOfProcessors=to_string(si.dwNumberOfProcessors);
    switch (si.wProcessorArchitecture) {
    case 0: {procArchitecture="x86"; break;};
    case 9: {procArchitecture="x64 (AMD or Intel)"; break;};
    case 5: {procArchitecture="ARM"; break;};
    case 6: {procArchitecture="Intel Itanium-based"; break;};
    case 12: {procArchitecture="ARM64"; break;};
    default: procArchitecture="Unknown architecture.";
    }

    procType = getCPUName();
}
