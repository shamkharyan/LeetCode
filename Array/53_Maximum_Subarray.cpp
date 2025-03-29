class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        int currSum = 0;

        for (int i = 0; i < nums.size(); ++i)
        {
            if (currSum < 0)
                currSum = 0;
            currSum += nums[i];
            if (currSum > maxSum)
                maxSum = currSum;
        }
        return maxSum;
    }
};
