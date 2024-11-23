class Solution {
public:
    string convertToBase7(int num) {
        string base7;
        int sign = 1;
        if (num == INT_MIN)
            return "-104134211162";
        if (num == 0)
            return "0";
        if (num < 0)
        {
            sign = -1;
            num *= -1;
        }
        while (num != 0)
        {
            base7 = (char)(num % 7 + '0') + base7;
            num /= 7;
        }
        if (sign == -1)
            base7 = "-" + base7;
        return base7;
    }
};