//
// Created by Xiaoyu Lyu on 19/11/2025.
//
/*
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]
Example 2:

Input: head = [1], n = 1
Output: []
Example 3:

Input: head = [1,2], n = 1
Output: [1]

 */

#include "removeNthNodeFromEndOfList.h"

ListNode* removeNthNodeFromEndOfList::removeNthFromEnd(ListNode* head, int n)
{
    ListNode *dummy = new ListNode(0, head);
    ListNode *left = dummy;
    ListNode *right = head->next;

    while(n-- and right)
    {
        right = right->next;
    }
    while(right)
    {
        left = left->next;
        right = right->next;
    }

    left->next = left->next->next;
    return dummy->next;
}