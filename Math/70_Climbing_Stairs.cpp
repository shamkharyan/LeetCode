class Solution {
public:
    int C(int n, int k)
    {
        unsigned long long res = 1;
        int j = 2;
        for (int i = n; i > max(k, n - k); --i)
        {
            res *= i;
            while (res % j == 0 && j <= min(k, n - k))
                res /= j++;
        }
        return res;
    }
    int climbStairs(int n) {
        int two = 0;
        int count = 0;
        while (two <= n)
            count += C(n--, two++);
        return count;
    }
};
