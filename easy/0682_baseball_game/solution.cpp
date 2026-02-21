class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int sum = 0;
        for (const string& s : operations)
        {
            if (s == "C")
            {
                sum -= st.top();
                st.pop();
            }
            else if (s == "D")
            {
                sum += st.top() * 2;
                st.push(st.top() * 2);
            }
            else if (s == "+")
            {
                int b = st.top();
                st.pop();
                int a = st.top();
                st.push(b);
                st.push(a + b);
                sum += a + b;
            }
            else
            {
                sum += stoi(s);
                st.push(stoi(s));
            }
        }
        return sum;
    }
};