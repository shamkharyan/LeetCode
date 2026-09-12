class Solution
{
public:
    int minChanges(int n, int k)
    {
        int a, b;
        int count = 0;
        while (n > 0 || k > 0)
        {
            a = n & 1;
            b = k & 1;
            if (a & ~b)
                ++count;
            else if (~a & b)
                return -1;
            n >>= 1;
            k >>= 1;
        }
        return count;
    }
};

// 1101
// 1110

// 1101
// 0100
