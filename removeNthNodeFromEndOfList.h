//
// Created by Xiaoyu Lyu on 19/11/2025.
//

#ifndef LEETCODE_REMOVENTHNODEFROMENDOFLIST_H
#define LEETCODE_REMOVENTHNODEFROMENDOFLIST_H

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    explicit ListNode(int x) : val(x), next(nullptr) {}
    ListNode(const int x, ListNode *next) : val(x), next(next) {}
    };

class removeNthNodeFromEndOfList
{
    public:
    static ListNode* removeNthFromEnd(ListNode *head, int n);
};


#endif //LEETCODE_REMOVENTHNODEFROMENDOFLIST_H