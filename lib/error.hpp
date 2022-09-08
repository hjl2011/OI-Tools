// OI-Tools | Lib | Error
// This source code file is under GPLv2.
// Copyright (c) 2022 hjl2011

#pragma once

inline void show_error(int id,string str) {
    if(id <= 0) CreateLog(2,str + "\n");
    if(!id) return PrintERR("Error: " + str);
    system("cls");
    string Err = "OI-Tools Error\n\nOops!\nAn error occurred.\nError message :  ";
    Err += (id != -1 ? to_string(id) : "") + " " + str + "\n\nWould you want to visit the Issues page?\n"; 
    HWND _hwnd;
    if(MessageBox(_hwnd,Err.c_str(),"OI-Tools Error",MB_ICONERROR | MB_YESNO) == 6) system("start https://github.com/hjl2011/OI-Tools/issues");
    exit(0);
}