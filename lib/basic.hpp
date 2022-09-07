// OI-Tools | Lib | Basic
// This source code file is under GPLv2.
// Copyright (c) 2022 hjl2011

#pragma once

#define VERSION "1.1.0"

/*
x.y.z-alpha.c       Alpha
x.y.z-beta.c        Beta
x.y.z (LTS)         LTS
x.y.z (Release)     Release
x.y.z               Preview
*/

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <windows.h>
#include <cstdlib>
#include <filesystem>
#include <map>
#include <functional>
#include <fstream>
#include <sstream>
#include <deque>
#include <io.h>
#include <iomanip>
#include <signal.h>
using std::cin;
using std::cout;
using std::string;
using std::vector;
using std::to_string;
using std::getline;
using std::map;
using std::function;
using std::ifstream;
using std::ios;
using std::stringstream;
using std::deque;
using std::fstream;
using std::setw;
using std::setfill;

string command,temp;
map <string,function <void()> > commandlist;
map <string,function <void()> >::iterator func;
deque <string> commands;
deque <string> _commands;
stringstream CommandInitStream;
int LogID;
SYSTEMTIME SysTime;

inline void PrintERR(string str) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY | FOREGROUND_RED);
    cout << str;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
}

inline void CreateLogFile() {
    LogID = 0;
    while(~_access(("logs/" + to_string(LogID) + ".log").c_str(),F_OK)) LogID++;
    fstream _LogStream(("logs/" + to_string(LogID) + ".log").c_str(),ios::out);
    _LogStream.close();
}

inline void CreateLog(int LogType,string LogContent) {
    fstream _LogStream(("logs/" + to_string(LogID) + ".log").c_str(),ios::app);
    if(LogType == -1) {
        _LogStream << LogContent;
        return ;
    }
    if(LogType == 0) _LogStream << "[DEBUG]";
    if(LogType == 1) _LogStream << "[INFO]";
    if(LogType == 2) _LogStream << "[WARN]";
    if(LogType == 3) _LogStream << "[ERR]";
    GetLocalTime(&SysTime);
    _LogStream << " [" << SysTime.wYear << ".";
    _LogStream << setfill('0')  << setw(2) << SysTime.wMonth << ".";
    _LogStream << setfill('0')  << setw(2) << SysTime.wDay << " ";
    _LogStream << setfill('0')  << setw(2) << SysTime.wHour << ":";
    _LogStream << setfill('0')  << setw(2) << SysTime.wMinute << ":";
    _LogStream << setfill('0')  << setw(2) << SysTime.wSecond << ".";
    _LogStream << setfill('0')  << setw(3) << SysTime.wMilliseconds;
    _LogStream << "] " << LogContent;
    _LogStream.close();
}