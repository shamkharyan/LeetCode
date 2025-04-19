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
    void traverse(TreeNode* root, vector<vector<int>>& path)
    {
        queue<TreeNode*> nodes;
        queue<int> lvl;
        nodes.push(root);
        int last_lvl = 0;
        lvl.push(1);
        while (!nodes.empty())
        {
            if (nodes.front()->left)
            {
                nodes.push(nodes.front()->left);
                lvl.push(lvl.front() + 1);
            }
            if (nodes.front()->right)
            {
                nodes.push(nodes.front()->right);
                lvl.push(lvl.front() + 1);
            }
            if (lvl.front() != last_lvl)
            {
                path.push_back({nodes.front()->val});
                ++last_lvl;
            }
            else
                path.back().push_back(nodes.front()->val);
            lvl.pop();
            nodes.pop();
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> path;
        if (root)
            traverse(root, path);
        return path;

    }
};
