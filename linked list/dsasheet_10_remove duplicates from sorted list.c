struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(head==NULL||head->next==NULL)
    return head;
    struct ListNode*slow=head,*fast=head->next;
    while(fast)
    {
        if(slow->val!=fast->val)
        {
            slow->next=fast;
            slow=slow->next;
        }
            fast=fast->next;
    }
    slow->next=fast;
    return head;
}
