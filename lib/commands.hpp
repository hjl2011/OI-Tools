// OI-Tools | Lib | Commands
// This source code file is under AGPLv3 License.
// Copyright (c) 2022 hjl2011

#pragma once

namespace Commands {
    inline void version() {
        if(commands.size()) return show_error(0);
        cout << string("OI-Tools\n\nVersion : ") + VERSION + "\nAuthor : hjl2011";
    }
    inline void license() {
        if(commands.size()) return show_error(0);
        fstream LicenseFile("LICENSE",ios::in);
        if(LicenseFile.fail()) show_error(-1);
        string str;
        system("cls");
        while(getline(LicenseFile,str)) cout << str << '\n';
    }
    inline void exit() {
        if(commands.size()) return show_error(0);
        _exit(0);
    }
    inline void help() {
        if(commandlist.size()) return show_error(0);
        fstream HelpFile("sources/help-data/index.data",ios::in);
        if(HelpFile.fail()) show_error(-1);
        string str;
        system("cls");
        while(getline(HelpFile,str)) cout << str << '\n';
    }
}