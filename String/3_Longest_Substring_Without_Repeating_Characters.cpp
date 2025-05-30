class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        size_t max_len = 0;
        size_t left = 0;
        size_t right = 0;
        size_t n = s.size();
        unordered_set<char> uset;

        while (left < n)
        {
            if (uset.find(s[left]) == uset.end())
                uset.insert(s[left++]);
            else
            {
                while (uset.find(s[left]) != uset.end())
                    uset.erase(s[right++]);
            }
            if (max_len < uset.size())
                max_len = uset.size();
        }
        return static_cast<int>(max_len);
    }
};
