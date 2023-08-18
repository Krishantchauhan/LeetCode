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
class Solution
{
public:
    void count(TreeNode *rt, int *ct)
    {
        if (rt != NULL)
            *ct = *ct + 1;
        if (rt->left)
            count(rt->left, ct);
        if (rt->right)
            count(rt->right, ct);
    }

    int countNodes(TreeNode *root)
    {
        if (!root)
            return 0;

        int ct = 0;
        count(root, &ct);
        return ct;
    }
};