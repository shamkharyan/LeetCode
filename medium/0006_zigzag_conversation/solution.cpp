class Solution
{
public:
    string convert(string s, int numRows)
    {
        int n = s.size();
        if (numRows == 1 || numRows >= n)
            return s;

        string ans;
        int k = 0;
        for (int i = 0; i < numRows; ++i)
        {
            int j = 0;
            while (j < n + numRows)
            {
                if (j - i >= 0 && j - i < n && i != 0)
                    ans.push_back(s[j - i]);
                if (j + i < n && i != numRows - 1)
                    ans.push_back(s[j + i]);
                j += 2 * (numRows - 1);
            }
        }
        return ans;
    }
};
