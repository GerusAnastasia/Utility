#ifndef INFONAMES_H
#define INFONAMES_H
#include <iostream>
#include <windows.h>
# include <Lmcons.h>
#include <QString>
//#include "stdafx.h"
#define SECURITY_WIN32
#include "Security.h"
#include "info.h"
using namespace std;

class InfoNames: public Info{
    string userName;
    string computerName;
public:
    InfoNames(){getStatus();}
    ~InfoNames(){}
    void getStatus();
    string wstrtostr(const wstring &);
    string getUserName() const;
    string getComputerName() const;
};



#endif // INFONAMES_H

