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
    int uniquePaths(int m, int n) {
        return C(m + n - 2, m - 1);
    }
};
