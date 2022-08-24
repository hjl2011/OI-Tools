// OI-Tools | Main
// This source code file is under AGPLv3 License.
// Copyright (c) 2022 hjl2011

#include "lib/basic.hpp"
#include "lib/error.hpp"
#include "lib/check.hpp"

#include "oj/luogu.hpp"
int main(int argc,char *argv[]) {
    Check_Update(VERSION);
    Command_Init(argc,argv);
    if(command.size() < 1) {show_error(ERR_COMMAND_NOT_FOUND);return 0;}
    if(command.size() >= 1 && command[0] == "lg") {
        if(command.size() >= 2 && command[1] == "open") {
            if(command.size() >= 3 && command[2] == "user") {
                if(command.size() == 4 && command[3].length() > 8) show_error(ERR_COMMAND_NOT_FOUND);
                else luogu::open::user(command[3]);
            } else if(command.size() == 4 && command[2] == "prob") {
                luogu::open::prob(command[3]);
            } else if(command.size() == 4 && command[2] == "sol") {
                luogu::open::sol(command[3]);
            } else if(command.size() == 4 && command[2] == "discuss") {
                luogu::open::discuss(command[3]);
            } else if(command.size() == 3 && command[2] == "ide") {
                luogu::open::ide();
            } else show_error(ERR_COMMAND_NOT_FOUND);
        } else show_error(ERR_COMMAND_NOT_FOUND);
    } else show_error(ERR_COMMAND_NOT_FOUND);
    return 0;
}