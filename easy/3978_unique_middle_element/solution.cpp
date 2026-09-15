class Solution
{
public:
    bool isMiddleElementUnique(vector<int>& nums)
    {
        int i = 0;
        int j = nums.size() - 1;
        int mid = nums[j / 2];
        while (i < j)
        {
            if (nums[i++] == mid || nums[j--] == mid)
                return false;
        }
        return true;
    }
};
