class Solution {
public:
    int hammingDistance(int x, int y) {
        int xor_ = x ^ y;
        int count = 0;
        while (xor_)
        {
            count += xor_ & 1;
            xor_ >>= 1;
        }
        return count;
    }
};
