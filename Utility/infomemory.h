#ifndef INFOMEMORY_H
#define INFOMEMORY_H
#include <Windows.h>
#include <string>
#include <iostream>
#include "info.h"

using namespace std;

class InfoMemory: public Info{
    string totalPhys;
    string availPhys;
    string memoryLoad;
    string totalVirt;
    string availVirt;
    string totalPagefile;
public:
    InfoMemory(){ getStatus();}
    ~InfoMemory(){}
    void getStatus();
    string getAvailVirt() const;
    string getTotalPhys() const;
    string getAvailPhys() const;
    string getMemoryLoad() const;
    string getTotalVirt() const;
    string getTotalPagefile() const;
};

#endif // INFOMEMORY_H


