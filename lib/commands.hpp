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
    inline void luogu_open() {
        if(commands.size() != 1 && commands.size() != 2) return show_error(0);
        if(commands.size() == 1 && commands[0] == "ide") system("start https://www.luogu.com.cn/ide");
        else if(commands.size() == 2 && commands[0] == "prob") system(("start https://www.luogu.com.cn/problem/" + _commands[1]).c_str());
        else if(commands.size() == 2 && commands[0] == "training") system(("start https://www.luogu.com.cn/training/" + _commands[1]).c_str());
        else if(commands.size() == 2 && commands[0] == "contest") system(("start https://www.luogu.com.cn/contest/" + _commands[1]).c_str());
        else if(commands.size() == 2 && commands[0] == "discuss") system(("start https://www.luogu.com.cn/discuss/" + _commands[1]).c_str());
        else if(commands.size() == 2 && commands[0] == "team") system(("start https://www.luogu.com.cn/team/" + _commands[1]).c_str());
        else show_error(0);
    }
};