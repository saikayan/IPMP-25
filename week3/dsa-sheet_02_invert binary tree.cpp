void swap(struct TreeNode*root,struct TreeNode*p,struct TreeNode*q)
 {
    
    root->left=q;
    root->right=p;
   
 }
 void invert(struct TreeNode*root)
 {
    if(root!=NULL){
    swap(root,root->left,root->right);
    invert(root->left);
    invert(root->right);}
 }
struct TreeNode* invertTree(struct TreeNode* root) {
  invert(root);
  return root;
}