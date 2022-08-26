// OI-Tools | Lib | Basic
// This source code file is under AGPLv3 License.
// Copyright (c) 2022 hjl2011

#pragma once

#define VERSION "0.9.0-alpha.5"

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

string command,temp;
map <string,function <void()> > commandlist;
map <string,function <void()> >::iterator func;
vector <string> commands;
stringstream CommandInitStream;