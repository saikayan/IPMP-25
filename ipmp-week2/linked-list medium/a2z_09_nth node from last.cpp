/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    if(head->next==NULL)
    return NULL;
    int k=1;
    struct ListNode*temp=head;
    while(k<=n)
    {
        temp=temp->next;
        k++;
    }
    struct ListNode*temp2=head;
    while(temp!=NULL&&temp->next!=NULL)
    {
        temp=temp->next;
        temp2=temp2->next;
    }
    if(temp==NULL)
    {
        head=head->next;
        return head;
    }
    struct ListNode*temp3=temp2->next;
    temp2->next=temp3->next;
    free(temp3);
    return head;
}