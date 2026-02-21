class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        const vector<string> patterns = {
            "qwertyuiopQWERTYUIOP",
            "asdfghjklASDFGHJKL",
            "zxcvbnmZXCVBNM"
        };

        vector<string> strs;
        for (const string& s : words)
        {
            for (int i = 0; i < 3; ++i)
            {
                if (s.find_first_not_of(patterns[i]) == string::npos)
                {
                    strs.push_back(s);
                    break;
                }
            }
        }
        return strs;
    }
};
