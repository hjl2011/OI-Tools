// OI-Tools | Lib | Error
// This source code file is under GPLv2.
// Copyright (c) 2022 hjl2011

#pragma once

inline void show_error(int id,string str) {
    if(!id) {
        CreateLog(2,str + "\n");
        PrintERR("Error: " + str);
        return ;
    }
    string err = "Oops!\nAn error occurred.\nError message :  ";
    err += (id != -1 ? to_string(id) : "") + " " + str;
    err += "\n\nWould you like to visit the Issues page now?";
    if(MessageBox(nullptr,err.c_str(),"OI-Tools Error",MB_YESNO | MB_ICONERROR) == IDYES) system("start website/issues.url");
    exit(0);
}