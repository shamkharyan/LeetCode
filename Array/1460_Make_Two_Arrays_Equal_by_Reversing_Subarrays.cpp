class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        if (target.size() != arr.size())
            return false;
        sort(target.begin(), target.end());
        sort(arr.begin(), arr.end());
        int n = target.size();
        for (int i = 0; i < n; ++i)
            if (target[i] != arr[i])
                return false;
        return true;
    }
};