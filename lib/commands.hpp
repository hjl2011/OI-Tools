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
        GetFileContent("LICENSE");
    }
    inline void exit() {
        if(commands.size()) return show_error(0);
        _exit(0);
    }
    inline void help() {
        if(!commands.size()) GetFileContent("sources/help-data/index.data");
        else if(commands.size() == 1) {
            if(commands[0] == "exit") GetFileContent("sources/help-data/info/exit.data");
            else if(commands[0] == "help") GetFileContent("sources/help-data/info/help.data");
            else if(commands[0] == "license") GetFileContent("sources/help-data/info/license.data");
            else if(commands[0] == "version") GetFileContent("sources/help-data/info/version.data");
            else show_error(0);
        } else show_error(0);
    }
}