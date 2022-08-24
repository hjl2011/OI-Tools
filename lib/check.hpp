// OI-Tools | Lib | Check
// This source code file is under AGPLv3 License.
// Copyright (c) 2022 hjl2011

#pragma once

namespace Check {
    inline bool IsInt(string str,int MaxLength) {
        int len = str.length();
        if(len > MaxLength) return false;
        for(int i = 0;i < len;i++) if(str[i] > '9' || str[i] < '0') return false;
        return true;
    }
}