/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void rightSide(TreeNode* rt,int size,vector<int>&ans){
        if(rt==NULL)
            return ;
        if(ans.size() == size)
            ans.push_back(rt->val);
        rightSide(rt->right,size+1,ans);
        rightSide(rt->left,size+1,ans);
    }

    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        rightSide(root,0,ans);
        return ans;
    }
};