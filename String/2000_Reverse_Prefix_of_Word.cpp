class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i = 0;
        int j = word.find(ch);
        if (j == string::npos)
            return word;
        while (i < j)
            swap(word[i++], word[j--]);
        return word;
    }
};