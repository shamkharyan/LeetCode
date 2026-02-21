class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry = 0;
        int i = num1.size() - 1;
        int j = num2.size() - 1;
        string strsum;
        while (i != -1 && j != -1)
        {
            int sum = num1[i--] - '0' + num2[j--] - '0' + carry;
            carry = sum / 10;
            strsum.push_back(sum % 10 + '0');
        }
        while (i != -1)
        {
            int sum = num1[i--] - '0' + carry;
            carry = sum / 10;
            strsum.push_back(sum % 10 + '0');
        }
        while (j != -1)
        {
            int sum = num2[j--] - '0' + carry;
            carry = sum / 10;
            strsum.push_back(sum % 10 + '0');
        }
        if (carry)
            strsum.push_back(carry + '0');
        reverse(strsum.begin(), strsum.end());
        return strsum;
    }
};
