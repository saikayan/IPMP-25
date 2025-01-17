struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *temp1=headA,*temp2=headB;
    while(temp1!=temp2)
    {
        temp1=temp1?temp1->next:headB;
        temp2=temp2?temp2->next:headA;
    }
    return temp1;
}