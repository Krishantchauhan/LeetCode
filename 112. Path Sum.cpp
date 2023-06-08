class Solution {
public:
    bool hasPathSum(TreeNode* root, int target) {
        if(root!=NULL){
            
            int sum = target - root->val;

            if(root->left==NULL && root->right==NULL && sum==0)
                return true;

            bool left = hasPathSum(root->left,sum);
            bool right = hasPathSum(root->right,sum);

            return left||right;
        }
        return 0;
    }
};