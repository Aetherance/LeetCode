#include<stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int isLonger(struct ListNode* l1, struct ListNode* l2)
{
    int count_1 = 0,count_2 = 0;
    while(l1->next!=NULL)
    {
        count_1 ++;
        l1 = l1->next;
    }
    while(l2->next!=NULL)
    {
        count_2 ++;
        l2 = l2->next;
    }
    if(count_1>=count_2)
        return 1;
    return 0;
}
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    if(!isLonger(l1,l2))
    {
        struct ListNode* temp = l1;
        l1 = l2;
        l2 = temp;
    }
    struct ListNode * p1,*p2;
    p1 = l1;
    while(l1!=NULL&&l2!=NULL)
    {
        l1 -> val += l2 -> val;

        l1 = l1->next,l2 = l2 -> next;
    }
    l1 = p1;
    while(l1!=NULL)
    {
        if(l1->val>=10)
        {
            if(l1->next == NULL)
            {
                l1->next = (struct ListNode*)malloc(sizeof(struct ListNode));
                l1->next->val = 0;
                l1->next->next = NULL;
            }
            l1->next->val += l1->val / 10;
            l1->val %= 10;
        }
        l1 = l1 -> next;
    }
    return p1;
}