#ifndef INFOWINDOW_H
#define INFOWINDOW_H


#include <string>
#include <Windows.h>
#include "info.h"

using namespace std;

class InfoWindow: public Info{
    string version;
    string role;
public:
    InfoWindow(){getStatus();}
    ~InfoWindow(){}
    void getStatus();
    string getVersion() const;
    string getRole() const;
};

#endif // INFOWINDOW_H


