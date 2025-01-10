class Solution
{
public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
            vector<pair<int,int>> ans;
        if (!head || !head->next) return ans;

        Node* start = head;
        Node* end = head;

        while (end->next) {
            end = end->next;
        }

        while (start != end && start->prev != end) {
            int sum = start->data + end->data;

            if (sum == target) {
                ans.push_back({start->data, end->data});
                start = start->next;
                end = end->prev;
            } else if (sum < target) {
                start = start->next;
            } else {
                end = end->prev;
            }
        }

        return ans;
    }
};