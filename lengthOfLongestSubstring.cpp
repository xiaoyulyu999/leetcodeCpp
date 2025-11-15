#include "lengthOfLongestSubstring.h"
#include <unordered_map>
#include <algorithm>

int lengthOfLongestSubstring::findLength(const std::string& s)
{
    std::unordered_map<char, int> lastSeen;

    int length = 0, left = 0, right = 0;

    while (right < s.length())
    {
        char c = s[right];
        if (lastSeen.contains(c) && lastSeen[c] >= left)
            left = lastSeen[c] + 1;

        lastSeen[c] = right;
        length = std::max(length, right - left + 1);

        ++right;
    }

    return length;

}
