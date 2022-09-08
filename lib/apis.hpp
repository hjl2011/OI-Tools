// OI-Tools | Lib | APIs
// This source code file is under GPLv2.
// Copyright (c) 2022 hjl2011

#pragma once

inline void GetFileContent(string _path) {
    fstream _FileStream(_path.c_str(),ios::in);
    if(_FileStream.fail()) {
        PrintERR("Error: File does not exist.\n");
        CreateLog(2,"File does not exist.\n");
        return ;
    }
    string str;
    while(getline(_FileStream,str)) cout << str << '\n';
    _FileStream.close();
}