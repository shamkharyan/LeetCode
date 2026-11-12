class Solution
{
public:
    int longestMonotonicSubarray(vector<int>& nums)
    {
        int incr = 1;
        int decr = 1;
        int maxIncr = 1;
        int maxDecr = 1;
        for (int i = 1; i < nums.size(); ++i)
        {
            if (nums[i] > nums[i - 1])
            {
                ++incr;
                decr = 1;
            }
            else if (nums[i] < nums[i - 1])
            {
                ++decr;
                incr = 1;
            }
            else
            {
                incr = 1;
                decr = 1;
            }
            maxIncr = max(incr, maxIncr);
            maxDecr = max(decr, maxDecr);
        }
        return max(maxIncr, maxDecr);    
    }
};
