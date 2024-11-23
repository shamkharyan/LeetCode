class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        int max = *(max_element(candies.begin(), candies.end()));
        vector<bool> isMax(n, false);

        for (int i = 0; i < n; ++i)
            if (candies[i] + extraCandies >= max)
                isMax[i] = true;
        return isMax;
    }
};