// OI-Tools | Lib | Init
// This source code file is under GPLv2.
// Copyright (c) 2022 hjl2011

#pragma once

void SignalHandler() {
    signal(SIGINT,[](int _sign) {
        CreateLog(3,"Signal " + to_string(_sign) + " detected. (Program interrupted)\n");
        show_error(_sign,"Program interrupted");
    });
    signal(SIGBREAK,[](int _sign) {
        CreateLog(3,"Signal " + to_string(_sign) + " detected. (Program broke)\n");
        show_error(_sign,"Program broke");
    });
    signal(SIGABRT,[](int _sign) {
        CreateLog(3,"Signal " + to_string(_sign) + " detected. (Program aborted)\n");
        show_error(_sign,"Program aborted");
    });
}

inline void Init() {
    SignalHandler();
    CreateLogFile();
    CreateLog(0,"Initializing ...\n");
    system("cls");
    string GenerateTimeStamp;
    ifstream TimeStampFile("TIMESTAMP");
    if(TimeStampFile.fail()) return show_error(1,"File does not exist");
    TimeStampFile >> GenerateTimeStamp;
    TimeStampFile.close();
    cout << "OI-Tools | v";
    if(string(VERSION).find("alpha") != string::npos) cout << VERSION << " | Alpha";
    else if(string(VERSION).find("beta") != string::npos) cout << VERSION << " | Beta";
    else if(string(VERSION).find("(LTS)") != string::npos) cout << string(VERSION).erase(string(VERSION).find("(LTS)"))  << "| LTS";
    else if(string(VERSION).find("(Release)") != string::npos) cout << string(VERSION).erase(string(VERSION).find("(Release)")) << "| Release";
    else cout << VERSION << " | Preview";
    cout << " | " << GenerateTimeStamp << "\nCopyright (c) 2022 hjl2011\n";
    cout << "Type \"help\", \"version\" or \"license\" for more information.\n\n>>> ";
    commandlist.insert({"version",Commands::version});
    commandlist.insert({"license",Commands::license});
    commandlist.insert({"exit",Commands::exit});
    commandlist.insert({"help",Commands::help});
    commandlist.insert({"goto",Commands::_goto});
    commandlist.insert({"luogu-open",Commands::luogu_open});
    commandlist.insert({"hydro-open",Commands::hydro_open});
    commandlist.insert({"calc",Commands::calc});
    commandlist.insert({"openlogfile",Commands::openlogfile});
    CreateLog(0,"Start running...\n");
}

inline void CommandInit() {
    commands.clear(),_commands.clear(),CommandInitStream.clear(),CommandInitStream.str(command);
    while(CommandInitStream >> temp) {
        _commands.push_back(temp);
        for(int i = 0;i < temp.length();i++) if((temp[i] >= 'a' && temp[i] <= 'z') || (temp[i] >= 'A' && temp[i] <= 'Z')) temp[i] |= 32;
        commands.push_back(temp);
    }
    if(commands.size() == 0) return CreateLog(1,"Command array = {}\n");
    CreateLog(1,"Command array = {");
    for(int i = 0;i < _commands.size() - 1;i++) CreateLog(-1,_commands[i] + ",");
    CreateLog(-1,_commands[_commands.size() - 1] + "}\n");
}