class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1 = word1.size();
        int n2 = word2.size();
        int i1 = 0;
        int i2 = 0;
        string merged;
        while (i1 < n1 && i2 < n2)
        {
            merged += word1[i1++];
            merged += word2[i2++];
        }
        while (i1 < n1)
            merged += word1[i1++];
        while (i2 < n2)
            merged += word2[i2++];
        return merged; 
    }
};