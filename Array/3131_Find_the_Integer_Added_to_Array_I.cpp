class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int sum1 = 0;
        int sum2 = 0;
        int n = nums1.size();
        for (int i = 0; i < n; ++i)
        {
            sum1 += nums1[i];
            sum2 += nums2[i];
        }
        return (sum2 - sum1) / n;
    }
};
