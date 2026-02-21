class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i = 0;
        int j = 0;
        for (char c : s)
        {
            if (c != '#')
                s[i++] = c;
            else if (i != 0)
                --i;
        }
        for (char c : t)
        {
            if (c != '#')
                t[j++] = c;
            else if (j != 0)
                --j;
        }
        return s.substr(0, i) == t.substr(0, j);

    }
};