//
// Created by Xiaoyu Lyu on 12/11/2025.
//

#include "longestCommonPrefix.h"

#include <iostream>
#include <ostream>
#include <string>
#include <vector>
using std::string;
using std::vector;

string longestCommonPrefix::findPrefix(const vector<string>& strs)
{
    if (strs.empty()) return "";

    string prefix = strs[0];

    for (int i = 1; i < strs.size(); ++i)
    {
        while (strs[i].find(prefix) != 0)
        {
            prefix = prefix.substr(0, prefix.length() - 1);
            if (prefix.empty())
                return "";
        }
    }
    return prefix;
}
