class Solution 
{
public:
    bool hasAlternatingBits(int n) 
    {
        bool currBit = n & 1;
        n >>= 1;

        while (n)
        {
            if (currBit == (n & 1))
                return false;
            n >>= 1;
            currBit = !currBit;
        }

        return true;
    }
};

