class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle(numRows);
        triangle[0] = {1};
        if (numRows == 1)
            return triangle;
        triangle[1] = {1,1};
        if (numRows == 2)
            return triangle;
        for (int i = 2; i < numRows; ++i)
        {
            triangle[i] = vector<int>(i + 1, 1);
            for (int j = 1; j < i; ++j)
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
        return triangle;
    }
};