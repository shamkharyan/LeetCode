class Solution {
public:
    bool isHappy(int n) {
        int m = 0;
        while (n >= 10)
        {
            while (n != 0)
            {
                m += (n % 10) * (n % 10);
                n /= 10;
            }
            n = m;
            m = 0;
        }
        return n == 1 || n == 7;
    }
};