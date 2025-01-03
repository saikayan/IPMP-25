/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
      if(head==NULL||head->next==NULL)
    {
        return head;
    }
    struct ListNode*temp=head,*n=head->next,*temp1=head->next,*prev=NULL;
    while(temp&&temp->next!=NULL)
    {
        if(prev)
        prev->next=n;
        temp->next=n->next;
        n->next=temp;
        prev=temp;
        if(prev->next!=NULL){
        temp=temp->next;
        n=temp->next;}
    }
    head=temp1;
    return head;
}