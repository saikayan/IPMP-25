#include<stdio.h>
#include<stdlib.h>
struct ListNode
{
    int val;
    struct ListNode*next;
};
int search(struct ListNode*head,int data)
{
    struct ListNode*temp=head;
    while(temp)
    {
        if(head->val==data)
        return 1;
        temp=temp->next;
    }
    return 0;
}