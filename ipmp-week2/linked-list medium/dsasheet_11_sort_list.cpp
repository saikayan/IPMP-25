class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (!head || !head->next) return head;

        std::vector<int> values;
        ListNode* temp = head;
        while (temp) {
            values.push_back(temp->val);
            temp = temp->next;
        }

        std::sort(values.begin(), values.end());

        temp = head;
        for (int val : values) {
            temp->val = val;
            temp = temp->next;
        }

        return head;
    }
};
