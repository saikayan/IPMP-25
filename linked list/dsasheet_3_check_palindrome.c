bool isPalindrome(struct ListNode* head) {
    struct ListNode*fast=head,*p=head,*q=NULL,*r=NULL;
    while(fast&&fast->next)
    {
        fast=fast->next->next;
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
        if(fast)
        {
            p=p->next;
        }
    while(q&&p)
    {
        if(q->val!=p->val)
        {
            return false;
        }
        q=q->next;
        p=p->next;
    }
    return true;
}
