class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int counter = 0;
        int majority;
        for (int n : nums)
        {
            if (counter == 0)
            {
                majority = n;
                ++counter;
            }
            else if (majority == n)
                ++counter;
            else
                --counter;
        }
        return majority;
    }
};