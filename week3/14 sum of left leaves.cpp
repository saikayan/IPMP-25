class Solution {
public:
    int sum=0;
    void helper(TreeNode* root)
    {
        if(!root)return;
        if(root->left&&!root->left->left&&!root->left->right)
        {
            sum+=root->left->val;
        }
        helper(root->left);
        helper(root->right);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        helper(root);
        return sum;
    }
};