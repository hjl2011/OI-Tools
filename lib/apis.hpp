// OI-Tools | Lib | APIs
// This source code file is under AGPLv3 License.
// Copyright (c) 2022 hjl2011

#pragma once

inline void GetHelpContent(string _path) {
    fstream HelpFile(_path.c_str(),ios::in);
    if(HelpFile.fail()) show_error(-1);
    string str;
    while(getline(HelpFile,str)) cout << str << '\n';
}