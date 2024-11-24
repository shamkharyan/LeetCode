class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int x = 0;
        for (int i : nums)
            x ^= i;

        int diff_bit = 1;
        while (!(diff_bit & x))
            diff_bit <<= 1;
        
        int a = 0;
        int b = 0;
        for (int i : nums)
        {
            if (diff_bit & i)
                a ^= i;
            else
                b ^= i;
        }
        return {a, b};
    }
};
