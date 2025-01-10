class Solution
{
public:

    Node * removeDuplicates(struct Node *head)
    {
        if(!head||!head->next)return head;
        Node*temp=head;
        while (temp->next) {
        if (temp->data == temp->next->data) {
            Node* toDelete = temp->next;
            temp->next = temp->next->next;
            if (temp->next) {
                temp->next->prev = temp;
            }
            delete toDelete;
        } else {
            temp = temp->next;
        }
    }
        return head;
    }
};