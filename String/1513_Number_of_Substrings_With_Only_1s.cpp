class Solution {
public:
    int numSub(string s) {
        const int MOD = pow(10, 9) + 7;
        int n = s.size();
        int lcount;
        int count = 0;
        for (int i = 0; i < n; ++i)
        {
            lcount = 0;
            while (s[i] == '1')
            {
                count += ++lcount;
                if (count >= MOD)
                    count %= MOD;
                ++i;
            }
        }
        return count;
    }
};