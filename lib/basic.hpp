// OI-Tools | Lib | Basic
// This source code file is under AGPLv3 License.
// Copyright (c) 2022 hjl2011

#pragma once

#define VERSION "0.9.1"

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
using std::cin;
using std::cout;
using std::string;
using std::vector;
using std::to_string;
using std::getline;
using std::map;
using std::function;
using std::fstream;
using std::ios;
using std::stringstream;
using std::deque;

string command,temp;
map <string,function <void()> > commandlist;
map <string,function <void()> >::iterator func;
deque <string> commands;
stringstream CommandInitStream;