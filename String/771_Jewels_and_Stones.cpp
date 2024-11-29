class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        for (char s : stones)
        {
            for (char j : jewels)
            {
                if (s == j)
                {
                    ++count;
                    break;
                }
            }
        }
        return count;
    }
};
