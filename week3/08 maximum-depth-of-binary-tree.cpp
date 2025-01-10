class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root)
        {
            int x=maxDepth(root->right);
            int y=maxDepth(root->left);
            return x>y?x+1:y+1;
        }
        return 0;
    }
};