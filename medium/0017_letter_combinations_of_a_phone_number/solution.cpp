class Solution {
public:
    string getSet(char digit)
    {
        switch (digit)
        {
            case '2':
            return "abc";
            case '3':
            return "def";
            case '4':
            return "ghi";
            case '5':
            return "jkl";
            case '6':
            return "mno";
            case '7':
            return "pqrs";
            case '8':
            return "tuv";
            case '9':
            return "wxyz";
        }
        return "";
    }

    void solve(string& ans, const string& digits, vector<string>& combinations, int level)
    {
        for (char c : getSet(digits[level]))
        {
            ans[level] = c;
            if (level == ans.size() - 1)
                combinations.push_back(ans);
            else
                solve(ans, digits, combinations, level + 1);
        }
    }

    vector<string> letterCombinations(string digits) 
    {
        vector<string> combinations;
        string ans(digits.size(), ' ');

        solve(ans, digits, combinations, 0);
        return combinations;
    }
};
