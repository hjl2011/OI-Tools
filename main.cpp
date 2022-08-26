// OI-Tools | Main
// This source code file is under AGPLv3 License.
// Copyright (c) 2022 hjl2011

#include "lib/basic.hpp"
#include "lib/error.hpp"
#include "lib/commands.hpp"
#include "lib/init.hpp"

int main() {
    Init();
    while(true) {
        getline(cin,command);
        CommandInit();
        func = commandlist.find(commands[0]);
        commands[0] = "";
        if(func == commandlist.end()) {
            printf("Error: The command you entered does not exist.");
        } else {
            func -> second();
        }
        cout << "\n>>> ";
    }
    return 0;
}