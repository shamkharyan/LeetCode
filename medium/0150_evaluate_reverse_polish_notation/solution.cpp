class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (const string& str : tokens)
        {
            if (str == "-" || str == "+" || str == "*" || str == "/")
            {
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();
                if (str == "-")
                    st.push(a - b);
                else if (str == "+")
                    st.push(a + b);
                else if (str == "*")
                    st.push(a * b);
                else
                    st.push(a / b);
            }
            else
                st.push(stoi(str));
        }
        return st.top();
    }
};