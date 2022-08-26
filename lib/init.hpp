// OI-Tools | Lib | Init
// This source code file is under AGPLv3 License.
// Copyright (c) 2022 hjl2011

#pragma once

inline void Init() {
    cout << "OI-Tools | v" << VERSION << " | OK " << double(clock() / (double) CLOCKS_PER_SEC * 1000.00) << "ms\n";
    cout << "Copyright (c) 2022 hjl2011\n";
    cout << "Type \"help\", \"version\" or \"license\" for more information.\n\n>>> ";
    commandlist.insert({"version",Commands::version});
    commandlist.insert({"license",Commands::license});
    commandlist.insert({"exit",Commands::exit});
    commandlist.insert({"help",Commands::help});
}

inline void CommandInit() {
    commands.clear(),CommandInitStream.clear(),CommandInitStream.str(command);
    while(CommandInitStream >> temp) {
        for(int i = 0;i < temp.length();i++) if((temp[i] >= 'a' && temp[i] <= 'z') || (temp[i] >= 'A' && temp[i] <= 'Z')) temp[i] |= 32;
        commands.push_back(temp);
    }
}