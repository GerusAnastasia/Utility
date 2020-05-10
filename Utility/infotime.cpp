
#include <Windows.h>
#include <string>
#include "infotime.h"
using namespace std;

string InfoTime::getTimeUPC() const
{
    return timeUPC;
}

string InfoTime::getDataLocal() const
{
return dataLocal;
}

string InfoTime::getDataUPC() const
{
return dataUPC;
}

string InfoTime::getTimeLocal() const
{
    return timeLocal;
}


string InfoTime::getTimeFromStart() const
{
    return timeFromStart;
}


void InfoTime::getStatus(){
    _SYSTEMTIME tLocal;
    _SYSTEMTIME tUPC;
    GetSystemTime(&tLocal);
    GetLocalTime(&tUPC);
    timeLocal= convert(tLocal.wHour) + ":" + convert(tLocal.wMinute)  +":" + convert(tLocal.wSecond);
    timeUPC = convert(tUPC.wHour) + ":" + convert(tUPC.wMinute)  +":" + convert(tUPC.wSecond);
    dataLocal = to_string(tLocal.wDay) + "." + to_string(tLocal.wMonth)  +"." +
                to_string(tLocal.wYear);
    dataUPC = to_string(tUPC.wDay) + "." + to_string(tUPC.wMonth)  +"." +
                to_string(tUPC.wYear);
    dataLocal+=", "+getDay(tLocal.wDayOfWeek);
    dataUPC+=", "+getDay(tUPC.wDayOfWeek);
}

string InfoTime::getDay(int c){
    string day;
    switch(c){
    case 0: {day="Sun"; break; }
    case 1: {day="Mon"; break; }
    case 2: {day="Thu"; break; }
    case 3: {day="The"; break; }
    case 4: {day="Wen"; break; }
    case 5: {day="Fru"; break; }
    case 6: {day="Sut"; break; }
    default: day="Не установлено";
    }
    return day;
}

void InfoTime::getUpTime(){
    unsigned long uptime = ( unsigned long )GetTickCount();
    unsigned int days = uptime / (24 * 60 * 60 * 1000) ;
    uptime %= (24 * 60 *60 * 1000) ;
    unsigned int hours = uptime / (60 * 60 * 1000) ;
    uptime %= (60 * 60 * 1000) ;
    unsigned int minutes = uptime / (60 * 1000) ;
    uptime %= (60 * 1000) ;
    unsigned int seconds = uptime / (1000) ;
    timeFromStart=to_string(static_cast<unsigned long long>(days));
    timeFromStart+=" дня(ей), ";
    timeFromStart+=convert(hours);
    timeFromStart+=":";
    timeFromStart+=convert(minutes);
    timeFromStart+=":";
    timeFromStart+=convert(seconds);
}

string InfoTime:: convert(unsigned int time){
    string s;
    if(time<10 && time>=0)
       s = "0"+to_string(static_cast<unsigned long long>(time));
    else
       s = to_string(static_cast<unsigned long long>(time));
    return s;

}

