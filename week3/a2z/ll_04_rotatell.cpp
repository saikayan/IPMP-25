class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
         if(k==0||head==NULL||head->next==NULL)
    return head;
    int count=1;ListNode*temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        count++;
    }
    k=k%count;
    if(k==0)return head;
    int i=1;
    temp=head;
    while(i<count-k&&temp)
    {
        temp=temp->next;
        i++;
    }
    ListNode*temp2=temp->next,*ans=temp->next;
    temp->next=NULL;
    while(temp2->next)
    {
        temp2=temp2->next;   
    }
    temp2->next=head;
    return ans;
    }
};