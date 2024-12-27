struct ListNode* removeElements(struct ListNode* head, int val) {
    if(head==NULL)
    return head;
    struct ListNode* prev=NULL,*curr=head;
    while(curr)
    {
        if(curr->val==val)
        {
            if(curr==head)
            {
                head=head->next;
            }
            else
            {
                prev->next=curr->next;
            }
            curr=curr->next;
        }
        else{
        prev=curr;
         curr=curr->next;}
    }
    return head;
}
