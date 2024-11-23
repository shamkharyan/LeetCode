class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int x = digits.size() - 1;
        while (x != -1 && digits[x] == 9)
            digits[x--] = 0;
        if (x != -1)
            digits[x]++;
        else
            digits.insert(digits.begin(), 1);
        return digits;
    }
};