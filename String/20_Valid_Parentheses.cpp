class Solution {
public:
    bool check(char open, char close)
    {
        if (open == '(' && close == ')'
        || open == '{' && close == '}'
        || open == '[' && close == ']')
            return true;
        return false;
    }
    bool isValid(string s) {
        stack<char> st;
        for (char c : s)
        {
            if (c == '(' || c == '[' || c == '{')
                st.push(c);
            else if (!st.empty() && check(st.top(), c))
                st.pop();
            else
                return false;
        }
        return st.empty();
    }
};