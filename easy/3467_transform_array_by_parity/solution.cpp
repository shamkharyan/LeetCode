class Solution 
{
public:
    vector<int> transformArray(vector<int>& nums)
    {
        int even = 0;
        int odd = 0;

        for (int n : nums)
        {
            if (n % 2 == 0)
                ++even;
            else
                ++odd;
        }

        int i = 0;
        while (even-- > 0)
            nums[i++] = 0;
        
        while (odd-- > 0)
            nums[i++] = 1;

        return nums;
    }
};
