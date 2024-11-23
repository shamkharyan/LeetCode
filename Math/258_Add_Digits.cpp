class Solution {
public:
    int addDigits(int num) {
        int m = 0;
        while (num >= 10)
        {
            while (num != 0)
            {
                m += num % 10;
                num /= 10;
            }
            num = m;
            m = 0;
        }
        return num;
    }
};