class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> uset;
        int n = arr.size();
        for (int i = 0; i < n; ++i)
        {
            if (uset.find(2 * arr[i]) != uset.end())
                return true;
            if (arr[i] % 2 == 0 && uset.find(arr[i] / 2) != uset.end())
                return true;
            uset.insert(arr[i]);
        } 
        return false;
    }
};
