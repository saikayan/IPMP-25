struct ListNode
{
    int val;
    struct ListNode*next;
};
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *p,*q,*r;
    p=head;
    q=r=NULL;
    if(head==NULL||head->next==NULL)
    return head;
    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    return  q;
}
