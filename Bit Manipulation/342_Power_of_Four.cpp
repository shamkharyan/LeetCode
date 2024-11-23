class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0)
            return false;
        return ((0x55555555 & n) && (~n + 1 & n) == n);
    }
};