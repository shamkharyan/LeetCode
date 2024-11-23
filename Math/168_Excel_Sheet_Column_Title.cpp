class Solution {
public:
    string convertToTitle(int columnNumber) {
        const char *seq = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string ans;
        while (columnNumber != 0)
        {
            ans = seq[--columnNumber % 26] + ans;
            columnNumber /= 26;
        }
        return ans;
    }
};