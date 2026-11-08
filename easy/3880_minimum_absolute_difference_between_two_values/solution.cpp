class Solution
{
public:
    int minAbsoluteDifference(vector<int>& nums)
    {
        int n = nums.size();
        int minDist = INT_MAX;
        for (int i = 0; i < n - 1; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                if (nums[i] + nums[j] == 3 && abs(i - j) < minDist)
                    minDist = abs(i - j);
            }
        }
        return (minDist == INT_MAX)? -1 : minDist;    
    }
};
