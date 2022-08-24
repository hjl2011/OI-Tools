// OI-Tools | OJ | Luogu
// This source code file is under AGPLv3 License.
// Copyright (c) 2022 hjl2011

#pragma once

#define LG_USER_NOT_FOUND 1.1
#define LG_DISCUSS_ID_ERR 1.2

namespace luogu {
    namespace open {
        inline void user(string UserID) {
            int uid = stoi(UserID);
            if(uid <= 0) {return show_error(LG_USER_NOT_FOUND,uid);}
            string cmd = "start https://www.luogu.com.cn/user/" + to_string(uid);
            system(cmd.c_str());
        }
        inline void prob(string ProbID) {
            string cmd = "start https://www.luogu.com.cn/problem/" + ProbID;
            system(cmd.c_str());
        }
        inline void sol(string ProbID) {
            string cmd = "start https://www.luogu.com.cn/problem/solution/" + ProbID;
            system(cmd.c_str());
        }
        inline void discuss(string DiscussID) {
            if(Check::IsInt(DiscussID,7)) {
                string cmd = "start https://www.luogu.com.cn/discuss/" + DiscussID;
                system(cmd.c_str());
            } else {
                show_error(LG_DISCUSS_ID_ERR);
            }
        }
        inline void ide() {
            string cmd = "start https://www.luogu.com.cn/ide";
            system(cmd.c_str());
        }
    };
};