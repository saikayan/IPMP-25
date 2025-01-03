/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     struct Node *next;
 *     struct Node *random;
 * };
 */

struct Node* copyRandomList(struct Node* head) {
	struct Node*temp=head,*bemp=NULL,*bemp1=NULL,*temp1=NULL,*bnew=NULL,*last=NULL;
    void create(int x)
    {
        struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
        newnode->val=x;
        newnode->next=NULL;
        newnode->random=NULL;
        if(bnew==NULL)
        last=bnew=newnode;
        else{
            last->next=newnode;
            last=newnode;
        }
    }
    while(temp!=NULL)
    {
        create(temp->val);
        temp=temp->next;
    }
    temp=head;
    bemp=bnew;
    while(temp!=NULL&&bemp!=NULL)
    {
        if(temp->random==NULL)
        {
            bemp->random=NULL;
        }
        else
        {
            bemp1=bnew;
            temp1=head;
            int i=0,j=0;
            while(temp->random!=temp1)
            {
                i++;
                temp1=temp1->next;
            }
            while(temp->random->val!=bemp1->val||j!=i)
            {
                j++;
                bemp1=bemp1->next;
            }
            bemp->random=bemp1;
        }
        temp=temp->next;
        bemp=bemp->next;
        
    }
    return bnew;
}