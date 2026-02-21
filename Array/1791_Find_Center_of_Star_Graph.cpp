class Solution 
{
public:
    int findCenter(vector<vector<int>>& edges) 
    {
        int cand1 = edges[0][0];
        int cand2 = edges[0][1];

        if (cand1 == edges[1][0] || cand1 == edges[1][1])
            return cand1;
        return cand2;
    }
};
