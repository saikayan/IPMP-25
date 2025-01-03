/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode*fast=head,*slow=head;
    if(head==NULL)return false;
    do
    {
        slow=slow->next;
        fast=fast->next;
        fast=fast?fast->next:fast;
    }while(fast&&fast!=slow);
    if(fast)
    return true;
    return false;
}