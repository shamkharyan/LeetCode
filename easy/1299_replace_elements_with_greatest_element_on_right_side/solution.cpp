class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        ans[n - 1] = -1;
        int max = 0;
        for (int i = n - 1; i > 0; --i)
        {
            if (arr[i] > max)
                max = arr[i];
            ans[i - 1] = max;
        }
        return ans;
    }
};
