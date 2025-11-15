//
// Created by Xiaoyu Lyu on 10/11/2025.
//

#ifndef LEETCODE_SUMLISTNODE_H
#define LEETCODE_SUMLISTNODE_H

struct ListNode
{
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {};
    explicit ListNode(const int x) : val(x), next(nullptr) {};
    ListNode(const int x, ListNode* y) : val(x), next(y) {};
};

class sumListNode
{
    public:
    static ListNode* sumUp(const ListNode* l1, const ListNode* l2);
};


#endif //LEETCODE_SUMLISTNODE_H