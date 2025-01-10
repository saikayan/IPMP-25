class Solution {
public:
    void inorder(TreeNode*root,int low,int high,int *ans)
    {
        if(!root)return ;
        inorder(root->left,low,high,ans);
        if(low<=root->val&&root->val<=high)
        {
            *ans=*ans+root->val;
        }
        inorder(root->right,low,high,ans);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
    int ans=0;
    inorder(root,low,high,&ans);
    return ans;
    }
};