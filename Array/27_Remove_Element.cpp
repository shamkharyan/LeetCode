class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        if (n == 0)
            return 0;
        int i = 0;
        int j = n - 1;
        while (i <= j)
        {
            if (nums[i] == val && nums[j] != val)
                swap(nums[i++], nums[j--]);
            else if (nums[i] == val && nums[j] == val)
            {
                while (i <= j && nums[j] == val)
                    --j;
                if (i < j)
                    swap(nums[i++], nums[j--]);
            }
            else
                ++i;
        }
        return i;

    }
};
