// OI-Tools | Lib | APIs
// This source code file is under GPLv2.
// Copyright (c) 2022 hjl2011

#pragma once

inline void GetFileContent(string _path) {
    fstream _FileStream(_path.c_str(),ios::in);
    if(_FileStream.fail()) show_error(1);
    string str;
    while(getline(_FileStream,str)) cout << str << '\n';
    _FileStream.close();
}

inline void CreateLogFile() {
    LogID = 0;
    while(~_access(("logs/" + to_string(LogID) + ".log").c_str(),F_OK)) LogID++;
    fstream _LogStream(("logs/" + to_string(LogID) + ".log").c_str(),ios::out);
    _LogStream.close();
}

inline void CreateLog(int LogType,string LogContent) {
    fstream _LogStream(("logs/" + to_string(LogID) + ".log").c_str(),ios::app);
    if(LogType == 0) _LogStream << "[DEBUG]";
    if(LogType == 1) _LogStream << "[INFO]";
    if(LogType == 2) _LogStream << "[WARN]";
    if(LogType == 3) _LogStream << "[ERR]";
    GetLocalTime(&SysTime);
    _LogStream << " [" << SysTime.wYear << ".";
    _LogStream << setfill('0')  << setw(2) << SysTime.wMonth << ".";
    _LogStream << setfill('0')  << setw(2) << SysTime.wDay << " ";
    _LogStream << setfill('0')  << setw(2) << SysTime.wHour << " ";
    _LogStream << setfill('0')  << setw(2) << SysTime.wMinute << ":";
    _LogStream << setfill('0')  << setw(2) << SysTime.wSecond << ".";
    _LogStream << setfill('0')  << setw(3) << SysTime.wMilliseconds;
    _LogStream << "] " << LogContent << "\n";
    _LogStream.close();
}