https://leetcode.com/explore/featured/card/top-interview-questions-easy/94/trees/631/



Given an integer array nums where the elements are sorted in ascending order, convert it to a height-balanced binary search tree.

A height-balanced binary tree is a binary tree in which the depth of the two subtrees of every node never differs by more than one.
  
  
  video link- https://www.youtube.com/watch?v=C59kWTK4_Zs


----------------------------------------------




class Solution {
public:
    TreeNode* solve(int l,int h,vector<int>& nums)
    {
        
        if(l>h)
            return NULL;
       
           int mid=(l+h)/2;
            TreeNode* x=new TreeNode(nums[mid]);
       
            x->left=solve(l,mid-1,nums);
            x->right=solve(mid+1,h,nums);
        return x;
        
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
       
        
        TreeNode* root=solve(0,nums.size()-1,nums);
        return root;
        
    }
};
