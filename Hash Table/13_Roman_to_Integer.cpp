class Solution {
public:
    int romanToInt(string s) {
        int n = s.length();
        int num = 0;
        int max = 0;
        const unordered_map<char, int> umap = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        for (int i = n - 1; i >= 0; --i)
        {
            int curr = umap.at(s[i]);
            if (max <= curr)
            {
                max = curr;
                num += curr;
            }
            else
                num -= curr;
        }
        return num;
    }
};