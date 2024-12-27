#include<stdio.h>
#include<stdlib.h>
struct ListNode
{
    int val;
    struct ListNode*next;
};
void insert_head(struct ListNode *head,int data)
{
    struct ListNode* newnode=(struct ListNode*)malloc(sizeof(struct ListNode));
    newnode->val=data;
    newnode->next=NULL;
    if(!head)
    {
        head=newnode;
    }
    newnode->next=head;
    head=newnode;
}