class Solution {
public:
    bool divideArray(vector<int>& nums) {
        vector<int> count(500);
        for (int i = 0; i < nums.size(); ++i)
            ++count[nums[i] - 1];
        for (int i = 0; i < 500; ++i)
            if (count[i] % 2 != 0)
                return false;
        return true;
    }
};
