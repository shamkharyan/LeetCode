class Solution {
public:
    int myAtoi(string s) {
        int sgn = 1;
        int i = 0;
        long long n = 0;

        while (isspace(s[i]))
            ++i;
        if (s[i] == '+' || s[i] == '-')
            if (s[i++] == '-')
                sgn = -1;
        while(isdigit(s[i]))
        {
            n = n * 10 + s[i] - '0';
            if (sgn * n >= INT_MAX || sgn * n <= INT_MIN)
                return (sgn == 1)? INT_MAX : INT_MIN;
            ++i;
        }
        return sgn * n;
    }
};