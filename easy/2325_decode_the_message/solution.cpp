class Solution
{
public:
    string decodeMessage(string key, string message)
    {
        unordered_map<char, int> umap;
        int k = 0;

        for (char c : key)
        {
            if (c != ' ' && !umap.count(c))
                umap[c] = k++;
        }

        for (char& c : message)
        {
            if (c != ' ')
                c = 'a' + umap[c];
        }
        
        return message;
    }
};
