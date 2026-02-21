class Solution {
public:
    int reverse(int x) {
        int y = 0;
        while (x != 0)
        {
            if (y <= 214748364 && y >= -214748364)
            {
                y = y * 10 + x % 10;
                x /= 10;
            }
            else if (y == 214748364 && x <= 7)
                return y * 10 + x;
            else
                return 0;
        }
        return y;
    }
};
