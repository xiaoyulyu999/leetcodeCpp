#include <iostream>
#include <vector>
#include "longestCommonPrefix.h"
#include "threeSum.h"
using namespace std;

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main()
{
    vector<int> numbers = {-1,0,1,2,-1,-4};
    auto result = threeSum::solution(numbers);

    for (auto &triplet : result) {
        cout << "[";
        for (int i = 0; i < triplet.size(); i++) {
            cout << triplet[i];
            if (i < triplet.size() - 1) cout << ",";
        }
        cout << "]\n";
    }

    return 0;
}