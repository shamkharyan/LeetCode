class Solution {
public:
    string toHex(int num) {
        if (num == 0)
            return "0";
        unsigned n = num;
        string hex = "0123456789abcdef";
        string res;

        while (n != 0)
        {
            res = hex[n % 16] + res;
            n /= 16;
        }
        return res;
    }
};