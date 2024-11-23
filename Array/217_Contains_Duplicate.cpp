class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n =  nums.size();
        if (n < 2)
            return false;
        if (n == 2)
            return nums[0] == nums[1];
        unordered_map<int, int> ump;
        for (int i = 0; i < n; ++i)
        {
            if (ump[nums[i]])
                return true;
            ++ump[nums[i]];
        }
        return false;
    }
};