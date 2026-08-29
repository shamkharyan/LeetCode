class Solution 
{
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        if (nums1.empty() || nums2.empty())
        {
            if (nums1.empty())
                nums1 = std::move(nums2);
            return;
        }

        int k1 = 0;
        int k2 = 0;

        while (k1 < m)
        {
            if (nums1[k1] > nums2[k2])
            {
                swap(nums1[k1], nums2[k2]);
                for (int i = k2; i < n - 1; ++i)
                {
                    if (nums2[i] <= nums2[i + 1])
                        break;
                    swap(nums2[i], nums2[i + 1]);
                }
            }
            ++k1;
        }
        while (k2 < n)
            nums1[k1++] = nums2[k2++];
    }
};
