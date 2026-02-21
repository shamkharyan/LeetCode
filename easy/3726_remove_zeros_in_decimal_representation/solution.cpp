class Solution 
{
public:
    long long removeZeros(long long n)
    {
        long long ans = 0;
        long long tens = 1;

        while (n > 0)
        {
            if (n % 10 != 0)
            {
                ans += tens * (n % 10);
                tens *= 10;
            }
            n /= 10;
        }
        return ans;
    }
};
