class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        bitset<128> buff;
        int maxLen = 0;
        int n = s.size();
        int i = 0;
        int j = 0;
        while (i < n)
        {
            while (i < n && !buff.test(s[i]))
                buff.set(s[i++]);
            if (i - j > maxLen)
                maxLen = i - j;
            while (j <= i && buff.test(s[i]))
                buff.reset(s[j++]);
        }
        return maxLen;
    }
};
