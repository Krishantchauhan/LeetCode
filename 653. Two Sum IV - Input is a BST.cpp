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
    vector<int>ans;
    void inorder(TreeNode* rt){
        if(!rt)
            return;
        inorder(rt->left);
        ans.push_back(rt->val);
        inorder(rt->right);
    }
    bool findTarget(TreeNode* root, int k) {
        inorder(root);
        int low=0;
        int high=ans.size()-1;
        while(low<high){
            int sum=ans[low]+ans[high];
            if(sum==k)
                return true;
            else if(sum>k)
                high--;
            else if (sum<k)
                low++;
        }
        return false;
    }
};