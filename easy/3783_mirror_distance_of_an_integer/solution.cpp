class Solution
{
public:
    int mirrorDistance(int n)
    {
        int mirror = 0;
        int nn = n;
        while (nn > 0)
        {
            mirror = 10 * mirror + nn % 10;
            nn /= 10;
        }
        return abs(n - mirror);
    }
};
