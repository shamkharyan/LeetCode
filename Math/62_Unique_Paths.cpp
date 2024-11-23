class Solution {
public:
    int uniquePaths(int m, int n) {
        long long prod = 1;
        int j = 2;
        for (int i = max(m, n); i <= m + n - 2; ++i)
        {
            prod *= i;
            while (j < min(m, n) && prod % j == 0)
                prod /= j++;
        }
        return prod;
        //return fact(m + n - 2) / (fact(m - 1) * fact(n - 1));
    }
};