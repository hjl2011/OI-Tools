// OI-Tools | Lib | Basic
// This source code file is under AGPLv3 License.
// Copyright (c) 2022 hjl2011

#pragma once

#define VERSION "0.6.7-alpha.3"

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <windows.h>
#include <cstdlib>
using std::cin;
using std::cout;
using std::string;
using std::vector;
using std::to_string;

vector <string> command;

inline void Command_Init(int argc,char *argv[]) {
    for(int i = 1;i < argc;i++) command.push_back(argv[i]);
}

inline void Show_Version(string ver) {
    if(freopen("C:/ProgramData/OI-Tools/show-prompt/data","r",stdin) == nullptr) {
        system("cd /d C:/ProgramData/ && mkdir OI-Tools && cd OI-Tools && mkdir show-prompt");
        freopen("C:/ProgramData/OI-Tools/show-prompt/data","w",stdout);
        SYSTEMTIME systime;
        GetLocalTime(&systime);
        printf("%d %d",systime.wYear,systime.wMonth);
        fclose(stdin),fclose(stdout);
        goto show;
    } else {
        int Y,M;
        scanf("%d %d %d",&Y,&M);
        SYSTEMTIME systime;
        GetLocalTime(&systime);
        if(Y < systime.wYear) goto show;
        if(M < systime.wMonth) goto show;
        return ;
    }
    show: 
    string str = "OI-Tools\nVersion : " + ver + "\nAuthor : hjl2011\n\n\nThis prompt box will pop up when you use it for the first time every month.";
    MessageBox(nullptr,str.c_str(),"OI-Tools",MB_OK | MB_ICONINFORMATION);
}