class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if (n == 0)
            return 1;
        int count = 9;
        for (int i = 9; i > 9 - n + 1; --i)
            count *= i;
        return count + countNumbersWithUniqueDigits(n - 1);
    }
};
