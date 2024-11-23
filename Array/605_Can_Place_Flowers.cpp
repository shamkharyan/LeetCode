class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        int nn = flowerbed.size();
        int i;
        if (nn == 1)
            return (flowerbed[0] == 0 && n <= 1) || (flowerbed[0] == 1 && n == 0);
        if (flowerbed[0] == 0 && flowerbed[1] == 0)
            flowerbed[count++] = 1;
        for (i = 1; i < nn - 1; ++i)
        {
            if (flowerbed[i] == 0 && flowerbed[i-1] == 0 && flowerbed[i+1] == 0)
            {
                flowerbed[i] = 1;
                ++count;
            }
        }
        if (flowerbed[i] == 0 && flowerbed[i - 1] == 0)
            ++count;
        return count >= n;
    }
};