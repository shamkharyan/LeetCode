class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int n = chalk.size();
        if (n == 1)
            return 0;
        int i = 0;
        unsigned long long sum = chalk[0];
        for (int i = 1; i < n; ++i)
            sum += chalk[i];
        k %= sum;
        while (chalk[i] <= k)
        {
            k -= chalk[i];
            i = (i + 1) % n;
        }
        return i;
    }
};
