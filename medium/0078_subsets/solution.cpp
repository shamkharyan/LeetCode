class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int subsn = pow(2, n);
        vector<vector<int>> subs(subsn, vector<int>());
        for (int i = 0; i < subsn; ++i)
            for (int j = 0; j < n; ++j)
                if ((i >> j) & 1)
                    subs[i].push_back(nums[j]);
        return subs;
    }
};
