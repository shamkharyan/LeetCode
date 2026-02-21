class Solution {
public:
    int maximum69Number (int num) {
        int sixInd = -1;
        int i = 0;
        int num1 = num;
        while (num1)
        {
            if (num1 % 10 == 6)
                sixInd = i;
            ++i;
            num1 /= 10;
        }
        if (sixInd == -1)
            return num;
        return num - 6 * pow(10, sixInd) + 9 * pow(10, sixInd);
    }
};
