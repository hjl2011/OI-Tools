// OI-Tools | Lib | Init
// This source code file is under AGPLv3 License.
// Copyright (c) 2022 hjl2011

#pragma once

inline void Init() {
    cout << "OI-Tools | v" << VERSION << " | OK ";
    printf("%gms\n",double(clock() / (double) CLOCKS_PER_SEC));
    cout << "Copyright (c) 2022 hjl2011\n";
    cout << "Type \"help\", \"update\" or \"license\" for more information.\n\n";
    cout << ">>> ";
}