// OI-Tools | Lib | Error
// This source code file is under AGPLv3 License.
// Copyright (c) 2022 hjl2011

#pragma once

#define ERR_COMMAND_NOT_FOUND -1

inline void show_error(double errid,int var1 = 0) {
    if(errid == -1) {
        if(MessageBox(nullptr,"You have entered the wrong command or this function has not been developed yet.\nWould you like to visit the Issues page now?","OI-Tools Error",MB_YESNO | MB_ICONERROR) == IDYES) system("start sources/website/issues.url");
    } else if(errid == 1.1) {
        string err = "Luogu OJ Lib Error:\nThe 'uid' you entered is incorrect.\nWould you like to visit the Issues page now?";
        if(MessageBox(nullptr,err.c_str(),"OI-Tools Error",MB_YESNO | MB_ICONERROR) == IDYES) system("start sources/website/issues.url");
    } else if(errid == 1.2) {
        string err = "Luogu OJ Lib Error:\nThe 'DiscussID' you entered is incorrect.\nWould you like to visit the Issues page now?";
        if(MessageBox(nullptr,err.c_str(),"OI-Tools Error",MB_YESNO | MB_ICONERROR) == IDYES) system("start sources/website/issues.url");
    } else if(errid == 1.2) {
        string err = "An internal error occurred in the program.\nWould you like to visit the Issues page now?";
        if(MessageBox(nullptr,err.c_str(),"OI-Tools Error",MB_YESNO | MB_ICONERROR) == IDYES) system("start sources/website/issues.url");
    }
}