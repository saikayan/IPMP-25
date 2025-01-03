class Solution {
public:
    Node* flatten(Node* head) {
        if (!head) return nullptr;

        Node* curr = head;

        while (curr) {
            if (!curr->child) {
                curr = curr->next;
                continue;
            }

            Node* nextNode = curr->next;
            Node* temp3 = flatten(curr->child);

            curr->next = temp3;
            temp3->prev = curr;

            while (temp3->next) {
                temp3 = temp3->next;
            }

            if (nextNode) {
                temp3->next = nextNode;
                nextNode->prev = temp3;
            }

            curr->child = nullptr;
            curr = nextNode;
        }

        return head;
    }
};
