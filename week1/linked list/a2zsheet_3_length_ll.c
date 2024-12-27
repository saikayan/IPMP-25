#include<stdio.h>
#include<stdlib.h>
struct ListNode
{
    int val;
    struct ListNode*next;
};
int length_ll(struct Listnode*head)
{
    int length=0;
    struct ListNode*temp=head;
    while(temp)
    {
        length++;
        temp=temp->next;
    }
}