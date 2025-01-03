/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* head=NULL,*last=NULL;
 void create(int x)
 {
    struct ListNode*newnode=(struct ListNode*)malloc(sizeof(struct ListNode));
    newnode->val=x;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=last=newnode;
    }
    else{
        last->next=newnode;
        last=newnode;
    }
 }
    struct ListNode* temp1=l1,*temp2=l2;
    int carry=0;
    while(temp1!=NULL&&temp2!=NULL)
    {
        int temp=temp1->val+temp2->val+carry;
        int x=temp<10?temp:temp-10;
        carry=temp<10?0:1;
        create(x);
        temp1=temp1->next;
        temp2=temp2->next;
    }
    if(temp1!=NULL)
    {
        while(temp1!=NULL){
        int temp=temp1->val+carry;
        int x=temp<10?temp:temp-10;
        carry=temp<10?0:1;
        create(x);
        temp1=temp1->next;}
    }
    if(temp2!=NULL)
    {
        while(temp2!=NULL){
        int temp=temp2->val+carry;
        int x=temp<10?temp:temp-10;
        carry=temp<10?0:1;
        create(x);
        temp2=temp2->next;}
    }
    if(carry!=0)
    {
        create(carry);
    }
    return head;
}