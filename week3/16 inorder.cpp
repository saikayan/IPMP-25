class Solution {
public:
    /*void inorder(TreeNode *root,vector<int>&ans)
    {
        if(root)
        {
            inorder(root->left,ans);
            ans.push_back(root->val);
            inorder(root->right,ans);
        }   
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        inorder(root,ans);
        return ans;
    }*/
    vector<int> inorderTraversal(TreeNode *root)
    {
        stack<TreeNode*>t;
        vector<int> a;
        TreeNode*current=root;
        while(current||!t.empty())
        {
            while(current)
            {
                t.push(current);
                current=current->left;
            }
            current=t.top();
            t.pop();
            a.push_back(current->val);
            current=current->right;
        }
        return a;
    }
};