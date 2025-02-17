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
    int sum(TreeNode* root, bool isLeft)
    {
        if (!root)
            return 0;
        if (root && root->left == nullptr && root->right == nullptr)
            return (isLeft)? root->val : 0;
        return sum(root->left, true) + sum(root->right, false);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        return sum(root, false);
    }
};
