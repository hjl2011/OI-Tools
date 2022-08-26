// OI-Tools | Main
// This source code file is under AGPLv3 License.
// Copyright (c) 2022 hjl2011

#include "lib/basic.hpp"
#include "lib/commands.hpp"
#include "lib/init.hpp"

int main() {
    Init();
    map <string,function <void()> >::iterator func;
    while(true) {
        getline(cin,command);
        func = commandlist.find(command);
        if(func == commandlist.end()) {
            printf("Error: The command you entered does not exist.");
        } else {
            func -> second();
        }
        printf("\n>>> ");
    }
    return 0;
}