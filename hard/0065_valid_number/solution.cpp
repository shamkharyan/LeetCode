class Solution 
{
public:
    bool checkAfterExp(const string& s, int expIdx)
    {
        int n = s.size();
        int i = expIdx + 1;
        bool isDigitFound = false;

        if (i < n && (s.at(i) == '+' || s.at(i) == '-'))
            ++i;
        for (; i < n; ++i)
        {
            if (!isdigit(s.at(i)))
                return false;
            if (!isDigitFound)
                isDigitFound = true;
        }
        return isDigitFound;
    }

    bool checkAfterDot(const string& s, int dotIdx)
    {
        int n = s.size();

        for (int i = dotIdx + 1; i < n; ++i)
        {
            if (s.at(i) == 'e' || s.at(i) == 'E')
                return checkAfterExp(s, i);
            if (!isdigit(s.at(i)))
                return false;
        }
        return true;
    }

    bool isNumber(string s)
    {
        int n = s.size();
        int i = 0;
        bool isDigitFound = false;

        if (s[0] == '+' || s[0] == '-')
            ++i;
        for (; i < n; ++i)
        {
            if (s[i] == 'e' || s[i] == 'E')
                return checkAfterExp(s, i) && isDigitFound;
            if (s[i] == '.')
            {
                bool res = checkAfterDot(s, i);
                if (res && isDigitFound)
                    return true;
                return res && i + 1 < n && s[i + 1] != 'E' && s[i + 1] != 'e';
            }
            if (!isdigit(s[i]))
                return false;
            if (!isDigitFound)
                isDigitFound = true;
        }
        return isDigitFound;
    }
};
