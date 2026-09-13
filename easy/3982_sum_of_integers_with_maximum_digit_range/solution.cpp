class Solution
{
public:
    int maxDigitRange(vector<int>& nums)
    {
        int sum = 0;
        int maxRange = 0;
        for (int n : nums)
        {
            int copy = n;
            int max = 0;
            int min = 9;
            while (copy > 0)
            {
                int digit = copy % 10;
                if (digit > max)
                    max = digit;
                if (digit < min)
                    min = digit;
                copy /= 10;
            }
            if (max - min > maxRange)
            {
                maxRange = max - min;
                sum = n;
            }
            else if (max - min == maxRange)
                sum += n;
        }
        return sum;      
    }
};
