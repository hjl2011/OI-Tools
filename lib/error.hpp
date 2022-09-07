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
    system("cls");
    PrintERR("OI-Tools Error\n\n");
    PrintERR("--------------------------------------------------\n");
    PrintERR("Oops!\nAn error occurred.\nError message :  ");
    PrintERR((id != -1 ? to_string(id) : "") + " " + str);
    PrintERR("\n\nIssues page : https://github.com/hjl2011/OI-Tools/issues \n");
    PrintERR("--------------------------------------------------");
    exit(0);
}