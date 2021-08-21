https://leetcode.com/problems/count-good-nodes-in-binary-tree/

class Solution {
public:
    int dfs(TreeNode* root,int max)
    {
        if(root==NULL)
            return 0;
        int ans=0;
        if(root->val>=max)
        {
            ans++;
            max=root->val;
        }
        return ans+dfs(root->left,max)+dfs(root->right,max);
    }
    int goodNodes(TreeNode* root) {
       
        return dfs(root,INT_MIN);
    }
};
