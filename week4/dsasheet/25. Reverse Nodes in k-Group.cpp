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
   ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) {
            return head;
        }

        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;

        for (int i = 0; i < left - 1; i++) {
            prev = prev->next;
        }

        ListNode* cur = prev->next;

        for (int i = 0; i < right - left; i++) {
            ListNode* temp = cur->next;
            cur->next = temp->next;
            temp->next = prev->next;
            prev->next = temp;
        }

        return dummy->next;        
    }
     ListNode* reverseKGroup(ListNode* head, int k) {
        int length=0;
        ListNode*temp=head;
        while(temp)
        {
            temp=temp->next;
            length++;
        }
        if(length<k)return head;
        for(int i=1;i<length;i=i+k)
        {
            if(length-i+1<k)break;
            head= reverseBetween(head,i,i+k-1);
        }
        return head;
    }
};
    