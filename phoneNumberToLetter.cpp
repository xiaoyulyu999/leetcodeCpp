//
// Created by Xiaoyu Lyu on 26/11/2025.
//

#include "phoneNumberToLetter.h"

#include <unordered_map>


std::vector<std::string> phoneNumberToLetter::solution(const std::string& digits)
{
    std::unordered_map<char, std::string> phonePad = {
        {'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"},
        {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}
    };

    if (digits.empty())
        return {};

    std::vector<std::string> result{""};

    for (char digit : digits)
    {
        if (!phonePad.contains(digit))
            continue;

        std::vector<std::string> temp;

        for (const std::string& combo : result)
        {
            for (char letter : phonePad[digit])
            {
                temp.push_back(combo + letter);
            }
        }
        result.swap(temp);
    }

    return result;
}