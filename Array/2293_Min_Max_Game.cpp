class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        int n = nums.size();
        while (n != 1)
        {
            int k = 0;
            for (int i = 0; i < n / 2; ++i)
            {
                if (i % 2 == 0)
                    nums[k++] = min(nums[2 * i], nums[2 * i + 1]);
                else
                    nums[k++] = max(nums[2 * i], nums[2 * i + 1]);
            }
            n /= 2;
        }
        return nums[0];
    }
};
