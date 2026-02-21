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
    bool findTarget(TreeNode* root, int targetSum, int currentSum)
    {
        if (root == nullptr)
            return false;
        currentSum += root->val;
        if (root->left == nullptr && root->right == nullptr && currentSum == targetSum)
            return true;
        return findTarget(root->left, targetSum, currentSum) || findTarget(root->right, targetSum, currentSum);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return findTarget(root, targetSum, 0);
    }
};
