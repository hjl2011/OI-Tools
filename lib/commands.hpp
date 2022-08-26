// OI-Tools | Lib | Commands
// This source code file is under AGPLv3 License.
// Copyright (c) 2022 hjl2011

namespace Commands {
    inline void version() {
        string str = string("OI-Tools\n\nVersion : ") + VERSION + "\nAuthor : hjl2011";
        MessageBox(nullptr,str.c_str(),"OI-Tools",MB_OK | MB_ICONINFORMATION);
    }
}