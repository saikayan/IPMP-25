class Solution {
    int res = 0;

public:
int height(TreeNode* root) {
        if (!root) {
            return 0;
        }

        int x = height(root->left);
        int y = height(root->right);

        res = max(res, x + y);

        return 1 + max(x, y);
    }  
    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return res;        
    }
      
};