#include<iostream>
struct ListNode
{
    int val;
    struct ListNode *next,*prev;
};
ListNode* insert(struct ListNode *head)
{
    if(!head||!head->next)
    {
        return NULL;
    }
    struct ListNode*temp=head;
   while(temp->next->next)
   {
    temp=temp->next;
   }
   free(temp->next);
   temp->next=NULL;
   return head;
   
}