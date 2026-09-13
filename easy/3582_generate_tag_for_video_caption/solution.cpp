class Solution
{
public:
    void strToLower(string& str)
    {
        transform(str.begin(), str.end(), str.begin(), [](unsigned char c) {
            return tolower(c);
        });
    }

    string generateTag(string caption)
    {
        string ans = "#";
        string token;
        bool isFirst = true;
        stringstream ss(caption);

        while (getline(ss, token, ' '))
        {
            if (isFirst && !token.empty())
            {
                strToLower(token);
                isFirst = false;
            }
            else
            {
                strToLower(token);
                token[0] = toupper(token[0]);
            }
            ans += token;
            if (ans.size() >= 100)
                break;
        }
        return ans.substr(0, 100);
    }
};
