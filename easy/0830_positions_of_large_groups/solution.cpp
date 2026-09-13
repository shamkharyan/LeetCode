class Solution
{
public:
    vector<vector<int>> largeGroupPositions(string s)
    {
        vector<vector<int>> ans;
        int n = s.size();
        int i = 0;
        int k;

        while (i < n)
        {
            char curr = s[i];
            k = 0;
            while (i < n && s[i] == curr)
            {
                ++i;
                ++k;
            }
            if (k >= 3)
                ans.push_back({i - k, i - 1});
        }
        return ans;
    }
};
