class Solution {
public:
    string reverseVowels(string s) {
        string vowels = "aeiou";
        int n = s.size();
        int i1 = 0;
        int i2 = n - 1;

        while (i1 < i2)
        {
            while (i1 < i2 && vowels.find(tolower(s[i1])) == string::npos)
                ++i1;
            while (i1 < i2 && vowels.find(tolower(s[i2])) == string::npos)
                --i2;
            swap(s[i1++], s[i2--]);
        }
        return s;
    }
};