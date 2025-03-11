class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        stringstream ss(sentence);
        string curr;
        int i = 1;

        while (getline(ss, curr, ' '))
        {
            if (curr.find(searchWord) == 0)
                return i;
            ++i;
        }
        return -1;
    }
};
