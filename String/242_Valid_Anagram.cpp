class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;
        int n = s.size();
        vector<int> vec(26);
        for (int i = 0; i < n; ++i)
        {
            ++vec[s[i] - 'a'];
            --vec[t[i] - 'a'];
        }
        for (int i : vec)
            if (i != 0)
                return false;
        return true;
    }
};