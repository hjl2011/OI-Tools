// OI-Tools | Main
// This source code file is under AGPLv3 License.
// Copyright (c) 2022 hjl2011

#include "lib/basic.hpp"
#include "lib/error.hpp"
#include "lib/apis.hpp"
#include "lib/commands.hpp"
#include "lib/init.hpp"

int main() {
    Init();
    while(true) {
        getline(cin,command);
        CommandInit();
        func = commandlist.find(commands[0]);
        commands.pop_front();
        if(func == commandlist.end()) show_error(0);
        else func -> second();
        cout << "\n>>> ";
    }
    return 0;
}