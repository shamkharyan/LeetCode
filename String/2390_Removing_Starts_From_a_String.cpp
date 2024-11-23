class Solution {
public:
    string removeStars(string s) {
        int i = 0;
        for (char c : s)
        {
            if (c != '*')
                s[i++] = c;
            else
                --i;
        }
        return s.substr(0, i);
    }
};