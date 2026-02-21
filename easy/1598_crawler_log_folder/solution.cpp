class Solution {
public:
    int minOperations(vector<string>& logs) {
        int count = 0;
        for (const string& s : logs)
        {
            if (s == "../" && count)
                --count;
            else if (s == "./" || (s == "../" && !count))
                continue;
            else
                ++count;
        }
        return count;
    }
};