//
// Created by Xiaoyu Lyu on 21/11/2025.
//
/*
You are given an array of k linked-lists lists, each linked-list is sorted in ascending order.

Merge all the linked-lists into one sorted linked-list and return it.

Example 1:

Input: lists = [[1,4,5],[1,3,4],[2,6]]
Output: [1,1,2,3,4,4,5,6]
Explanation: The linked-lists are:
[
  1->4->5,
  1->3->4,
  2->6
]
merging them into one sorted linked list:
1->1->2->3->4->4->5->6

Example 2:
Input: lists = []
Output: []

Example 3:
Input: lists = [[]]
Output: []
 */

#include "mergeSortedList.h"
#include <vector>

ListNode* merge2sortedList(ListNode* l1, ListNode* l2);
ListNode* mergeSortedList::mergeKsortedList(std::vector<ListNode*>& lists)
{
    if (lists.empty()) return nullptr;


    while (lists.size() > 1)
    {
        std::vector<ListNode*> mergeList = {};
        for (int i = 0; i < lists.size(); i+=2)
        {
            ListNode* l1 = lists[i];
            ListNode* l2 = (i + 1) < lists.size() ? lists[i+1] : nullptr;

            ListNode* dummy = merge2sortedList(l1, l2);
            mergeList.push_back(dummy);
        }
        lists = std::move(mergeList);
    }
    return lists[0];
}

ListNode* merge2sortedList(ListNode* l1, ListNode* l2)
{
    auto* dummy = new ListNode();
    ListNode* ptr = dummy;

    while (l1 && l2)
    {
        if (l1->val < l2->val) ptr = l1, l1 = l1->next;
        else ptr = l2, l2 = l2->next;

        ptr = ptr->next;
    }

    ptr->next = l1?l1:l2;

    return dummy->next;
}