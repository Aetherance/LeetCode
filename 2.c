#include<stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    while(l1->next!=NULL&&l2->next!=NULL)
    {
        l1 -> val += l2 -> val;

        l1 = l1->next,l2 = l2 -> next;
    }
    while(l1->next!=NULL)
    {
        if(l1->val>=10)
        {
            l1->next->val = l1->val % 10;
            l1->val %= 10;
        }
        l1 = l1 -> next;
    }
    return l1;
}