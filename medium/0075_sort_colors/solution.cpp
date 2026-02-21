class Solution {
public:
    void sortColors(vector<int>& nums) {
        int rwb[3]{0};

        for (const int& x : nums)
            ++rwb[x];
        int k = 0;
        for (int& x : nums)
        {
            while (!rwb[k])
                ++k;
            x = k;
            --rwb[k];
        }
    }
};
