#ifndef INFOVIDEO_H
#define INFOVIDEO_H
#include <windows.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include "info.h"
#define MAX_COUNT 4

using namespace std;

class InfoVideo: public Info{
public:
    string   deviceName[MAX_COUNT];
    string   deviceString[MAX_COUNT];
    string   deviceID[MAX_COUNT];
    string   monitorName[MAX_COUNT];
    string   monitorString[MAX_COUNT];
    string   monitorID[MAX_COUNT];
    string   frequency[MAX_COUNT];
    string   deepColor[MAX_COUNT];
    string   size[MAX_COUNT];
    int count;

public:
    InfoVideo(){getStatus();}
    ~InfoVideo(){}
    void getStatus();
    string convertWCHARtoString(const std::wstring &);
    string getDeviceName(int) const;
    string getDeviceString(int) const;
    string getDeviceID(int) const;
    string getMonitorName(int) const;
    string getMonitorString(int) const;
    string getMonitorID(int) const;
    string getFrequency(int) const;
    string getDeepColor(int) const;
    string getSize(int) const;
    int getCount() const;
};

#endif // INFOVIDEO_H
