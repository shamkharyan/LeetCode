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
    void convert(vector<int>& nums, int start, int end, TreeNode*& head)
    {
        if (start > end)
            return;
        int mid = start + (end - start) / 2;
        head = new TreeNode(nums[mid]);
        convert(nums, start, mid - 1, head->left);
        convert(nums, mid + 1, end, head->right);
    }
    TreeNode* sortedArrayToBST(vector<int>& nums)
    {
        TreeNode* head = nullptr;
        convert(nums, 0, nums.size() - 1, head);
        return head;
    }
};
