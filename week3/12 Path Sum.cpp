class Solution {
public:
void helper(TreeNode * root, int target, bool *ans)
{
    if(*ans)return ;
    static int a=0;
    if(!root)return ;
    a=a+root->val;
    if(!root->left&&!root->right&&a==target)
    {
        *ans=true;
         a=a-root->val;
        return ;
    }
    helper(root->left,target,ans);
    helper(root->right,target,ans);
    a=a-root->val;
    return ;

}
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool ans=false;
        helper(root,targetSum,&ans);
        return ans;
    }
};