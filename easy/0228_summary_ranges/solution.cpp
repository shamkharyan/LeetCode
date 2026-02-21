class Solution 
{
public:
    vector<string> summaryRanges(vector<int>& nums)
    {
        vector<string> ranges;

        int i = 0;
        int n = nums.size();
        while (i < n)
        {
            int j = i;
            while (j < n - 1 && (long long) nums[j + 1] - nums[j] == 1)
                ++j;
            
            ranges.emplace_back();
            ranges.back() += to_string(nums[i]);
            if (j > i)
                ranges.back() += "->" + to_string(nums[j]);
            i = j + 1;
        }

        return ranges;
    }
};
