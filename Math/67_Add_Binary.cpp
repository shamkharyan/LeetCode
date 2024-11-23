class Solution {
public:
    string addBinary(string a, string b) {
        string sum;
        int carry = 0;
        int i1 = a.size() - 1;
        int i2 = b.size() - 1;

        while (i1 >= 0 && i2 >= 0)
        {
            int x = ((a[i1] - '0') + (b[i2] - '0') + carry);
            sum = (char)(x % 2 + '0') + sum;
            carry = x / 2;
            --i1;
            --i2;
        }
        while (i1 >= 0)
        {
            int x = ((a[i1] - '0') + carry);
            sum = (char)(x % 2 + '0') + sum;
            carry = x / 2;
            --i1;
        }
        while (i2 >= 0)
        {
            int x = ((b[i2] - '0') + carry);
            sum = (char)(x % 2 + '0') + sum;
            carry = x / 2;
            --i2;
        }
        if (carry != 0)
            sum = (char)(carry + '0') + sum;
        return sum;

    }
};