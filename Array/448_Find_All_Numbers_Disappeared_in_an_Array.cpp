class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> missing;
        for (int i = 0; i < nums.size(); ++i)
        {
            while (nums[i] != i + 1 && nums[nums[i] - 1] != nums[i])
                swap(nums[i], nums[nums[i] - 1]);
        }
        for (int i = 0; i < nums.size(); ++i)
            if (nums[i] != i + 1)
                missing.push_back(i + 1);
        return missing;
    }
};
