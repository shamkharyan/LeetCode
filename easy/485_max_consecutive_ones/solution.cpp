class Solution 
{
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int maxLen = 0;
        int currLen = 0;
        bool onOne = false;

        for (int n : nums)
        {
            if (n == 1 && onOne)
                ++currLen;
            else if (n == 1 && !onOne)
            {
                onOne = true;
                currLen = 1;
            }
            else if (n == 0 && onOne)
            {
                onOne = false;
                maxLen = max(maxLen, currLen);
                currLen = 0;
            }
        }
        return max(maxLen, currLen);
    }
};
