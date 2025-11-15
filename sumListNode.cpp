//
// Created by Xiaoyu Lyu on 10/11/2025.
//

#include "sumListNode.h"


ListNode* sumListNode::sumUp(const ListNode* l1, const ListNode* l2)
{
    ListNode result;
    ListNode* tracer = &result;
    int curry = 0;

    while (l1 != nullptr || l2 != nullptr || curry)
    {
        int sum = curry;
        if (l1 != nullptr)
        {
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2 != nullptr)
        {
            sum += l2->val;
            l2 = l2->next;
        }

        curry = sum / 10;
        tracer->next = new ListNode(sum % 10);
        tracer = tracer->next;

    }
    return result.next;
};

