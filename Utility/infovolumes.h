#ifndef INFOVOLUMES_H
#define INFOVOLUMES_H
#include <windows.h>
#include <iostream>
#include <stdio.h>
#include <tlhelp32.h>
#include "info.h"
#define SIZE 10
using namespace std;

class InfoVolumes: public Info{
    string diskName[SIZE];
    string fileSystem[SIZE];
    string tomNumber[SIZE];
    string freeSpace[SIZE];
    int count;

public:
    InfoVolumes(){getStatus();}
    ~InfoVolumes(){}
    string wstrtostr(const wstring &);
    void getStatus();
    string calc(unsigned long int num,int base);
    string getDiskName(int ) const;
    string getFileSystem(int ) const;
    string getTomNumber(int ) const;
    string getFreeSpace(int ) const;
    int getCount() const;
};

#endif // INFOVOLUMES_H

