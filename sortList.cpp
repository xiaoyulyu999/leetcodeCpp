//
// Created by Xiaoyu Lyu on 24/11/2025.
// Input: head = [4,2,1,3]
// Output: [1,2,3,4]
//Input: head = [-1,5,3,4,0]
// Output: [-1,0,3,4,5]
// Example 3:
//
// Input: head = []
// Output: []


#include "sortList.h"

#include "mergeSortedList.h"

ListNode* getMiddle(ListNode*);
ListNode* mergeList(ListNode* l1, ListNode* l2);
ListNode* sortList(ListNode* head)
{
    if (!head or !head->next) return head;

    //divide from middle
    ListNode* left = head;
    ListNode* right = getMiddle(head);
    ListNode* temp = right->next;
    right->next = nullptr;
    right = temp;

    left = sortList(left);
    right = sortList(right);

    return mergeList(left, right);
};

ListNode* getMiddle(ListNode* head)
{
    ListNode* slow = head;
    ListNode* fast = head->next;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    };

    return slow;
}

ListNode* mergeList(ListNode* l1, ListNode* l2)
{
    auto* head = new ListNode();
    ListNode* ptr = head;

    while (l1 && l2)
    {
        if (l1->val < l2->val) ptr->next = l1, l1 = l1->next;
        else ptr->next= l2, l2 = l2->next;
        ptr = ptr->next;
    }

    ptr->next = l1? l1 : l2;

    return head->next;
}
