/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
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

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode*temp=NULL;
        for(int i=0;i<lists.size();i++)
        {
            temp=mergeTwoLists(temp,lists[i]);
        }
        return temp;
    }
};