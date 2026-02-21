class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int> umap;
        unordered_set<int> uset;

        for (int i = 0; i < n; ++i)
           ++umap[arr[i]];
        for (auto& it : umap)
        {
            if (uset.find(it.second) == uset.end())
                uset.insert(it.second);
            else
                return false;
        }
        return true;
    }
};