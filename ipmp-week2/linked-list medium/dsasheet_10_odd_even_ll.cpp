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
    ListNode* oddEvenList(ListNode* head) {
        if(!head||!head->next)return head;
        ListNode* odd=NULL,*even=NULL,*tail1=NULL,*tail2=NULL;
        while(head &&head->next)
        {
            if(odd==NULL)
            {
                odd=tail1=head;
                head=head->next;
                even=tail2=head;
                head=head->next;
                tail1->next=tail2->next=NULL;
            }
            else
            {
                tail1->next=head;
                head=head->next;
                tail2->next=head;
                head=head->next;
                tail1=tail1->next;
                tail2=tail2->next;
                tail1->next=tail2->next=NULL;
            }
        }
        if(head)
        {
            tail1->next=head;
            tail1=tail1->next;
        }
        tail1->next=even;
        return odd;
    }
};