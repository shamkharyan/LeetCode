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
    void sumNumbersHelper(TreeNode* root, int currVal, int& sum)
    {
        if (root)
        {
            if (!root->left && !root->right)
            {
                sum += 10 * currVal + root->val;
                return;
            }
            if (root->left)
                sumNumbersHelper(root->left, 10 * currVal + root->val, sum);
            if (root->right)
                sumNumbersHelper(root->right, 10 * currVal + root->val, sum);
        }
    }
    int sumNumbers(TreeNode* root) {
        int sum = 0;
        int currVal = 0;
        sumNumbersHelper(root, currVal, sum);
        return sum;
    }
};
