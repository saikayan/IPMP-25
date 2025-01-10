class Solution {
  public:
    void deleteAllOccurOfX(struct Node** head, int x) {
        if(head==NULL)
        return;
        while((*head)->data==x)
        {
            (*head)=(*head)->next;
        }
       if(*head) (*head)->prev=NULL;
        struct Node*temp=*head;
        while(temp)
        {
            if(temp->data==x&&temp->next)
            {
                temp->prev->next=temp->next;
                temp->next->prev=temp->prev;
            }
            if(temp->data==x&&temp->next==NULL)
            {
                temp->prev->next=NULL;
            }
            temp=temp->next;
        }
    }
};