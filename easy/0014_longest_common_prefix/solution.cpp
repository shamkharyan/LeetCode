class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        int count = INT_MAX;
        for (int i = 0; i < n - 1; ++i)
        {
            int j = 0;
            int n1 = min(strs[i].size(), strs[i + 1].size());
            while (j < n1 && strs[i][j] == strs[i + 1][j])
                ++j;
            if (j < count)
                count = j;
        }
        return strs[0].substr(0, count);
    }
};