// OI-Tools | OJ | Luogu
// This source code file is under AGPLv3 License.
// Copyright (c) 2022 hjl2011

#pragma once

#define LG_USER_NOT_FOUND 1.1

namespace luogu {
    namespace open {
        inline void user(string UserID) {
            int uid = stoi(UserID);
            if(uid <= 0) {return show_error(LG_USER_NOT_FOUND,uid);}
            string url = "start https://www.luogu.com.cn/user/" + to_string(uid);
            system(url.c_str());
        }
        inline void prob(string ProbID) {
            string url = "start https://www.luogu.com.cn/problem/" + ProbID;
            system(url.c_str());
        }
        inline void sol(string ProbID) {
            string url = "start https://www.luogu.com.cn/problem/solution/" + ProbID;
            system(url.c_str());
        }
    };
};