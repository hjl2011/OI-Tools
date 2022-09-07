// OI-Tools | Lib | Commands
// This source code file is under GPLv2.
// Copyright (c) 2022 hjl2011

#pragma once

namespace Commands {
    inline void version() {
        if(commands.size()) return show_error(0,"The command you entered does not exist");
        cout << string("OI-Tools\n\nVersion : ") + VERSION + "\nAuthor : hjl2011";
    }
    inline void license() {
        if(commands.size()) return show_error(0,"The command you entered does not exist");
        GetFileContent("LICENSE");
    }
    inline void exit() {
        if(commands.size()) return show_error(0,"The command you entered does not exist");
        _exit(0);
    }
    inline void help() {
        if(!commands.size()) GetFileContent("help-data/index.data");
        else if(commands.size() == 1) {
            if(~_access(("help-data/info/" + commands[0] + ".data").c_str(),F_OK)) GetFileContent(string("help-data/info/" + commands[0] + ".data"));
            else show_error(0,"The command you entered does not exist");
        } else show_error(0,"The command you entered does not exist");
    }
    inline void _goto() {
        if(commands.size() != 1) return show_error(0,"The command you entered does not exist");
        system(string("start " + _commands[0]).c_str());
    }
    inline void luogu_open() {
        if(commands.size() != 1 && commands.size() != 2) return show_error(0,"The command you entered does not exist");
        if(commands.size() == 1 && commands[0] == "ide") system("start https://www.luogu.com.cn/ide");
        else if(commands.size() == 2 && commands[0] == "prob") system(("start https://www.luogu.com.cn/problem/" + _commands[1]).c_str());
        else if(commands.size() == 2 && commands[0] == "training") system(("start https://www.luogu.com.cn/training/" + _commands[1]).c_str());
        else if(commands.size() == 2 && commands[0] == "contest") system(("start https://www.luogu.com.cn/contest/" + _commands[1]).c_str());
        else if(commands.size() == 2 && commands[0] == "discuss") system(("start https://www.luogu.com.cn/discuss/" + _commands[1]).c_str());
        else if(commands.size() == 2 && commands[0] == "team") system(("start https://www.luogu.com.cn/team/" + _commands[1]).c_str());
        else if(commands.size() == 2 && commands[0] == "user") system(("start https://www.luogu.com.cn/user/" + _commands[1]).c_str());
        else show_error(0,"The command you entered does not exist");
    }
    inline void hydro_open() {
        if(commands.size() != 1 && commands.size() != 2) return show_error(0,"The command you entered does not exist");
        if(commands.size() == 1 && commands[0] == "ide") system("start https://hydro.ac/ide");
        else if(commands.size() == 2 && commands[0] == "prob") system(("start https://hydro.ac/p/" + _commands[1]).c_str());
        else if(commands.size() == 2 && commands[0] == "domain") system(("start https://hydro.ac/d/" + _commands[1] + "/").c_str());
        else if(commands.size() == 2 && commands[0] == "user") system(("start https://hydro.ac/user/" + _commands[1]).c_str());
        else show_error(0,"The command you entered does not exist");
    }
    inline void calc() {
        system(("powershell (" + command.erase(command.find("calc"),4) + ")").c_str());
    }
    inline void openlogfile() {
        if(commands.size()) return show_error(0,"The command you entered does not exist");
        system(("start logs/" + to_string(LogID) + ".log").c_str());
    }
};