#include<stdio.h>
#include<stdlib.h>
struct ListNode
{
    int val;
    struct ListNode*next;
};
void delete_tail(struct ListNode*head)
{
    if(!head)
    {
        return;
    }
    if(!head->next)
    {
        free(head);
        head=NULL;return;
    }
    struct ListNode *temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    free(temp->next);
    temp->next=NULL;
}