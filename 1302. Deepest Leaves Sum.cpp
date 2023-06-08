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
    int sum=0;
    int deepestLeavesSum(TreeNode* root) {
        int mx=mx_depth(root);
        sum_calc(root,0,mx);
        return sum;
    }

    void sum_calc(TreeNode* root,int curr,int mx){
        if(root!=NULL){ 
            if(root->left==NULL && root->right==NULL && curr+1==mx)
                sum+=root->val;
            sum_calc(root->left,curr+1,mx);
            sum_calc(root->right,curr+1,mx);
        }
    }

    int mx_depth(TreeNode* root){
        if(root!=NULL){
            return max(mx_depth(root->left),mx_depth(root->right))+1;
        }
        return 0;
    }
};