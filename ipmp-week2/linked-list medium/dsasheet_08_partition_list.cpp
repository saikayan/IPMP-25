class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if (!head || !head->next) return head;

        ListNode* small = nullptr; 
        ListNode* large = nullptr; 
        ListNode* tail1 = nullptr; 
        ListNode* tail2 = nullptr;

        while (head) {
            if (head->val < x) {
                if (!small) {
                    small = tail1 = head;
                } else {
                    tail1->next = head;
                    tail1 = tail1->next;
                }
            } else {
                if (!large) {
                    large = tail2 = head;
                } else {
                    tail2->next = head;
                    tail2 = tail2->next;
                }
            }
            head = head->next;
        }

        if (tail2) tail2->next = nullptr; 
        if (tail1) tail1->next = large; 

        return small ? small : large;
    }
};
