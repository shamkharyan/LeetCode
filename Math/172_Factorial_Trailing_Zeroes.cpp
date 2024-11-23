class Solution {
public:
    int trailingZeroes(int n) {
        int count = 0;
        int fives = 5;
        while (n / fives != 0)
        {
            count += n / fives;
            fives *= 5;
        }
        return count;
    }
};