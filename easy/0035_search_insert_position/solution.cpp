class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        if (nums[left] >= target)
            return left;
        if (nums[right] <= target)
            return right + (nums[right] < target);
        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (nums[mid] <= target && nums[mid + 1] > target)
                return mid + (nums[mid] < target);
            if (nums[mid] <= target)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return -1;
    }
};
