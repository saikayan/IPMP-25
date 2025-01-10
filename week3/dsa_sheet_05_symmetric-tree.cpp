bool issym(struct TreeNode* p,struct TreeNode* q);
bool isSymmetric(struct TreeNode* root) {
    if(root==NULL)
    return true;
    return issym(root->left,root->right);
}
bool issym(struct TreeNode* p,struct TreeNode *q)
{
    if(p==NULL&&q==NULL)
    return true;
    else if(p==NULL||q==NULL)
    return false;
    else if(p->val!=q->val)
    return false;
    return issym(p->left,q->right)&&issym(p->right,q->left);
}