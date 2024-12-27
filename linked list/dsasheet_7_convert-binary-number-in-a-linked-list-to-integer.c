int getDecimalValue(struct ListNode* head) {
    if(head==NULL)return 0;
    int length=0;
    struct ListNode *temp=head;
    while(temp)
    {
        length++;
        temp=temp->next;
    }
    temp=head;
    int k=length-1;
    int f=pow(2,k),sum=0;
    while(k>=0)
    {
        sum+=(temp->val)*f;
        f=f/2;
        temp=temp->next;
        k--;
    }
    return sum;
}
