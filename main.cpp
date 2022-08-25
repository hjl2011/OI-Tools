// OI-Tools | Main
// This source code file is under AGPLv3 License.
// Copyright (c) 2022 hjl2011

#include "lib/basic.hpp"
#include "lib/update.hpp"
#include "lib/init.hpp"

int main() {
    Check_Update(VERSION);
    Init();
    while(true) {
        cin >> command;
        if(command == "license") system("notepad LICENSE");
        cout << ">>> ";
    }
    return 0;
}