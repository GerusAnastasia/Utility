#ifndef INFOTIME_H
#define INFOTIME_H

#include <Windows.h>
#include <iostream>
#include <string>
#include "info.h"
using namespace std;

class InfoTime: public Info{
    string timeLocal;
    string timeUPC;
    string dataLocal;
    string dataUPC;
    string timeFromStart;
public:
    InfoTime()
    {
        getStatus();
        getUpTime();
       }
    ~InfoTime(){}
    void   getStatus();
    string getDay(int c);
    void   getUpTime();
    string convert(unsigned int );
    string getTimeLocal() const;
    string getTimeUPC() const;
    string getDataLocal() const;
    string getDataUPC() const;
    string getTimeFromStart() const;
};

#endif // INFOTIME_H



