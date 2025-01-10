bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
 bool flag=true;
 void helper(struct TreeNode* p, struct TreeNode* q)
 {
        if(p==NULL&&q==NULL)
        {
            return;
        }
        else if(p!=NULL&&q!=NULL){
            if(p->val!=q->val)
            {
                flag=false;
                return;
            }
            helper(p->left,q->left);
            helper(p->right,q->right);
        } 
        else{
            flag=false;
        }

 }
 helper(p,q);
 return flag;
}