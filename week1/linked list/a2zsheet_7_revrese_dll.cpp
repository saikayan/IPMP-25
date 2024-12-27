#include<iostream>
struct ListNode
{
    int val;
    struct ListNode *next,*prev;
};
ListNode* reverse(struct ListNode *head)
{
      if (head == NULL || head->next == NULL) {
        return head; 
    }
    ListNode* p = NULL;  
    ListNode* current = head;   
    while (current) {
        p = current->prev; 
        current->prev = current->next; 
        current->next = p;          
        current = current->prev; 
    }
    return p->prev;

}