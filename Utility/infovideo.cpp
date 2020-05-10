#include <windows.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include "infovideo.h"
#define MAX_COUNT 5

string InfoVideo::getDeviceName(int i) const
{
return deviceName[i];
}

string InfoVideo::getDeviceString(int i) const
{
return deviceString[i];
}

string InfoVideo::getDeviceID(int i) const
{
return deviceID[i];
}

string InfoVideo::getMonitorName(int i) const
{
return monitorName[i];
}

string InfoVideo::getMonitorString(int i) const
{
return monitorString[i];
}

string InfoVideo::getMonitorID(int i) const
{
return monitorID[i];
}

string InfoVideo::getSize(int i) const
{
return size[i];
}

string InfoVideo::getFrequency(int i) const
{
return frequency[i];
}

string InfoVideo::getDeepColor(int i) const
{
return deepColor[i];
}

string InfoVideo::convertWCHARtoString(const std::wstring &wstr){
    std::string strTo;
    char *szTo = new char[wstr.length() + 1];
    szTo[wstr.size()] = '\0';
    WideCharToMultiByte(CP_ACP, 0, wstr.c_str(), -1, szTo, (int)wstr.length(), NULL, NULL);
    strTo = szTo;
    delete[] szTo;
    return strTo;
}

int InfoVideo::getCount() const
{
    return count;
}

void InfoVideo::getStatus(){
    int deviceIndex = 0;
    int result ;
    do {

        DISPLAY_DEVICE displayDevice;
        displayDevice.cb =sizeof ( DISPLAY_DEVICE );
        result = EnumDisplayDevices ( NULL , deviceIndex , &displayDevice , 0) ;
        if(result==0 || deviceIndex==5) break;
        result=0;
        if ( displayDevice.StateFlags & DISPLAY_DEVICE_ACTIVE ) {

            DISPLAY_DEVICE monitor ;
            monitor.cb =sizeof ( DISPLAY_DEVICE );
            EnumDisplayDevices ( displayDevice.DeviceName , 0, &monitor , 0) ;
            deviceName[deviceIndex]=convertWCHARtoString(displayDevice.DeviceName);
            deviceString[deviceIndex]=convertWCHARtoString(displayDevice.DeviceString);
            deviceID[deviceIndex]= convertWCHARtoString(displayDevice.DeviceID);
            monitorName[deviceIndex] = convertWCHARtoString(monitor.DeviceName);
            monitorString[deviceIndex] = convertWCHARtoString(monitor.DeviceString);
            monitorString[deviceIndex] = convertWCHARtoString(monitor.DeviceID);

            DEVMODE dm ;

            if ( EnumDisplaySettings ( displayDevice.DeviceName , ENUM_CURRENT_SETTINGS , &dm )) {
                frequency[deviceIndex]=to_string(dm.dmDisplayFrequency)+ " Hz";
                deepColor[deviceIndex]=to_string(dm.dmBitsPerPel);
                size[deviceIndex]=to_string(dm.dmPelsHeight)+"x"+to_string(dm.dmPelsWidth);
            }
            deviceIndex ++;
            count=deviceIndex;
        }
        else break;
    }while(1);

}

