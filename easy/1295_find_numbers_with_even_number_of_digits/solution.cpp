class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for (int i : nums)
            if ((i / 10 <= 9 && i / 10 != 0) || (i / 1000 <= 9 && i / 1000 != 0) || (i / 100000 <= 9 && i / 100000 != 0))
                ++count;
        return count;
    }
};
