class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int8_t> freq(100);

        for (int i : nums)
            ++freq[i - 1];
        int8_t max = *max_element(freq.begin(), freq.end());
        int8_t count = 0;
        for (int8_t i : freq)
            if (i == max)
                ++count;
        return count * max;
    }
};
