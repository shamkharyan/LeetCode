class Solution
{
public:
    string restoreString(string s, vector<int>& indices)
    {
        string shuffled(s.size(), ' ');
        for (int i : indices)
            shuffled[indices[i]] = s[i];
        return shuffled;
    }
};
