class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        unordered_map<char, char> umap;
        unordered_set<char> uset;

        for (int i = 0; i < s.size(); ++i)
        {
            if (!umap.contains(s[i]) && !uset.contains(t[i]))
            {
                umap[s[i]] = t[i];
                uset.insert(t[i]);
            }
            else if (umap.contains(s[i]) && umap[s[i]] != t[i] || !umap.contains(s[i]) && uset.contains(t[i]))
                return false;
        }
        return true;
    }
};
