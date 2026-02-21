class Solution {
public:
    int strStr(string haystack, string needle) {
        int n1 = haystack.size();
        int n2 = needle.size();
        for (int i = 0; i < n1; ++i)
        {
            if (haystack[i] == needle[0])
            {
                int j = 1;
                while (i + j < n1 && j < n2 && haystack[i + j] == needle[j])
                    ++j;
                if (j == n2)
                    return i;
            }
        }
        return -1;
    }
};