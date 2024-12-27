#include<iostream>
struct ListNode
{
    int val;
    struct ListNode *next,*prev;
};
void insert(struct ListNode *head,int data)
{
     struct ListNode* newnode=new ListNode;
    newnode->val=data;
    newnode->next=NULL;
    newnode->prev=NULL;
    if(!head)
    {
        head=newnode;
    }
    struct ListNode*temp=head;
   while(temp->next)
   {
    temp=temp->next;
   }
   temp->next=newnode;
   newnode->prev=temp;
}