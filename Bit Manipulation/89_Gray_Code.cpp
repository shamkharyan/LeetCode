class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> code;
        code.reserve(pow(2, n));
        code.push_back(0);
        int bit = 1;
        for (int i = 0; i < n; ++i)
        {
            for (int i = code.size() - 1; i >= 0; --i)
                code.push_back(code[i] | bit);
            bit <<= 1;
        }
        return code;
    }
};
