// OI-Tools | Lib | Basic
// This source code file is under GPLv2.
// Copyright (c) 2022 hjl2011

#pragma once

#define VERSION "1.0.6"

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