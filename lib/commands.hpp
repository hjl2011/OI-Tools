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
            if(~_access(("sources/help-data/info/" + commands[0] + ".data").c_str(),F_OK)) GetFileContent(string("sources/help-data/info/" + commands[0] + ".data"));
            else show_error(0);
        } else show_error(0);
    }
    inline void _goto() {
        if(commands.size() != 1) return show_error(0);
        system(string("start " + _commands[0]).c_str());
    }
    inline void wiki() {
        if(commands.size()) return show_error(0);
        system("start sources/website/wiki.url");
    }
};