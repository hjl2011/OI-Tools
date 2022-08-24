// OI-Tools | Lib | Basic
// This source code file is under AGPLv3 License.
// Copyright (c) 2022 hjl2011

#pragma once

#define VERSION "0.8.0"

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

inline void Check_Update(string ver) {
    if(freopen("C:/ProgramData/OI-Tools/check-update/data","r",stdin) == nullptr) {
        system("cd /d C:/ProgramData/ && mkdir OI-Tools && cd OI-Tools && mkdir check-update");
        freopen("C:/ProgramData/OI-Tools/check-update/data","w",stdout);
        SYSTEMTIME systime;
        GetLocalTime(&systime);
        printf("%d %d",systime.wYear,systime.wMonth);
        fclose(stdin),fclose(stdout);
        goto ok;
    } else {
        int Y,M;
        scanf("%d %d %d",&Y,&M);
        SYSTEMTIME systime;
        GetLocalTime(&systime);
        if(Y < systime.wYear) goto ok;
        if(M < systime.wMonth) goto ok;
        return ;
    }
    ok :
    string str = "OI-Tools\nVersion : " + ver + "\nAuthor : hjl2011\n\n\nThis prompt box will pop up when you use it for the first time every month.";
    MessageBox(nullptr,str.c_str(),"OI-Tools",MB_OK | MB_ICONINFORMATION);
    // todo : Check Update
}