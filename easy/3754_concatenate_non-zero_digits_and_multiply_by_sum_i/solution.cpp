class Solution 
{
public:
    long long sumAndMultiply(int n) 
    {
        long long ans = 0;
        int tens = 1;
        int sum = 0;

        while (n > 0)
        {
            if (n % 10 != 0)
            {
                ans += tens * (n % 10);
                tens *= 10;
            }
            sum += n % 10;
            n /= 10;
        }
        return ans * sum;
    }
};
