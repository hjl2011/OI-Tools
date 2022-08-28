// OI-Tools | Lib | APIs
// This source code file is under AGPLv3 License.
// Copyright (c) 2022 hjl2011

#pragma once

inline void GetFileContent(string _path) {
    fstream _FileStream(_path.c_str(),ios::in);
    if(_FileStream.fail()) show_error(1);
    string str;
    while(getline(_FileStream,str)) cout << str << '\n';
}