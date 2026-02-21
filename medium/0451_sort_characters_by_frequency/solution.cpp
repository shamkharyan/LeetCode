class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        string ans;

        for (char c : s)
            ++freq[c];
        vector<pair<char, int>> vec(freq.begin(), freq.end());
        sort(vec.begin(), vec.end(), [](const auto& a, const auto& b)
        {
            return a.second > b.second;
        });

        for (int i = 0; i < vec.size(); ++i)
        {
            for (int j = 0; j < vec[i].second; ++j)
                ans.push_back(vec[i].first);
        }
        return ans;
    }
};
