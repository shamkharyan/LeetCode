class Solution 
{
public:
    int maxAdjacentDistance(vector<int>& nums)
    {
        int n = nums.size();
        int maxDist = 0;
        for (int i = 0; i < n; ++i)
        {
            int currDist = abs(nums[i] - nums[(i + 1) % n]);
            maxDist = max(maxDist, currDist);
        }

        return maxDist;
    }
};
