// OI-Tools | Lib | Error
// This source code file is under AGPLv3 License.
// Copyright (c) 2022 hjl2011

#pragma once

inline void show_error(int errid) {
    string err = string("OI-Tools | Error\n\nAn error occurred.\nError message: \n") + to_string(errid) + " ";
    if(errid == -1) err += "Unknown Error";
    else err += "Unknown Error";
    if(MessageBox(nullptr,err.c_str(),"OI-Tools",MB_YESNO | MB_ICONERROR) == IDYES) system("start sources/website/issues.url");
    exit(0);
}