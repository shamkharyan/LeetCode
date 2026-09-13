class Solution
{
public:
    int numberOfChild(int n, int k)
    {
        int max = n - 1;
        int cycles = k / max;
        if (cycles % 2 == 0)
            return k - cycles * max;
        return (cycles + 1) * max - k;
    }
};
