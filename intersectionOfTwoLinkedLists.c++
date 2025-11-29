//
// Created by Xiaoyu Lyu on 29/11/2025.
//

#include "intersectionOfTwoLinkedLists.hpp"

#include "ListNode.h"

ListNode * intersectionOfTwoLinkedLists::getIntersectionNode(ListNode *headA, ListNode *headB) {

    ListNode* l1 = headA, *l2 = headB;

    while (l1 != l2) {
        if (l1) l1 = l1->next;
        else l1 = headB;
        if (l2) l2 = l2->next;
        else l2 = headA;
    }
    return l1;

}
