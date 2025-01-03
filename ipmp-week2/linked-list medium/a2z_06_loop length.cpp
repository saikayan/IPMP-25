
int lengthOfLoop(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;    
        fast = fast->next->next;
        if (slow == fast) {
             int cnt = 1;
                fast = fast->next;
    
             while(slow!=fast){
                  cnt++;
                    fast = fast->next;
                  }
         return cnt;
        }
    }
    return 0; 
}