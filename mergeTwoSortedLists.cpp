//
// Created by Xiaoyu Lyu on 20/11/2025.
/* Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.
Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]
Example 2:

Input: list1 = [], list2 = []
Output: []
Example 3:

Input: list1 = [], list2 = [0]
Output: [0]

*/

#include "mergeTwoSortedLists.h"


ListNode* mergeTwoSortedLists::solution(ListNode* l1, ListNode* l2)
{
    ListNode* dummy = new ListNode();
    auto pt = dummy;

    while (l1 and l2)
    {
        if (l1->val < l2->val) pt->next = l1, l1 = l1->next;
        else pt->next = l2, l2 = l2->next;

        pt = pt->next;
    }
    if (l1) pt->next = l1;
    else pt->next = l2;

    return dummy->next;
}
