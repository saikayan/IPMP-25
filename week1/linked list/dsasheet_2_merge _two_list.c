struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode*head=NULL,*temp1=list1,*temp2=list2;
    if(list1&&list2){
    if(temp1->val<temp2->val){
    head=temp1;
    temp1=temp1->next;
    }
    else{
    head=temp2;
    temp2=temp2->next;
    }
   struct ListNode *temp3=head;
    while(temp1&&temp2)
    {
        if(temp1->val < temp2->val)
        {
            temp3->next=temp1;
            temp1=temp1->next;
            temp3=temp3->next;
            temp3->next=NULL;
        }
        else
        {
            temp3->next=temp2;
            temp2=temp2->next;
            temp3=temp3->next;
            temp3->next=NULL;
        }
    }
    if(temp1)
    {
        temp3->next=temp1;
    }
    if(temp2)
    {
        temp3->next=temp2;
    }
    return head;}
    if(list1)
    return list1;
    return list2;
}
