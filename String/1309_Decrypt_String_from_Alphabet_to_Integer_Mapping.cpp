class Solution {
public:
    string freqAlphabets(string s) {
        string ans;
        int n = s.size();
        for (int i = n - 1; i >= 0; --i)
        {
            if (s[i] == '#')
            {
                int ind = 10 * (s[i - 2] - '0') + s[i - 1] - '0';
                ans.push_back('a' + ind - 1);
                i -= 2;
            }
            else
                ans.push_back('a' + s[i] - '0' - 1);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
