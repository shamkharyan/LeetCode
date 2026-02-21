class Solution
{
public:
    bool digitCount(string num) 
    {
        vector<int> freq(10, 0);

        for (char n : num)
            ++freq[n - '0'];

        for (int i = 0; i < num.size(); ++i)
        {
            if (freq[i] != num[i] - '0')
                return false;
        }
        return true;
    }
};
