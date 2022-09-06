// OI-Tools | Main
// This source code file is under GPLv2.
// Copyright (c) 2022 hjl2011

#include "lib/basic.hpp"
#include "lib/error.hpp"
#include "lib/apis.hpp"
#include "lib/commands.hpp"
#include "lib/init.hpp"

int main() {
    Init();
    while(true) {
        CreateLog(0,"Reading command ...");
        getline(cin,command);
        CommandInit();
        if(commands.size() == 0) {cout << "\n>>> ";continue;}
        func = commandlist.find(commands[0]);
        commands.pop_front();
        _commands.pop_front();
        if(func == commandlist.end()) show_error(0);
        else func -> second();
        cout << "\n>>> ";
    }
    return 0;
}