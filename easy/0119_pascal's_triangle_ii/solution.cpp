class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> triangle(rowIndex + 1);
        triangle[0] = {1};
        if (rowIndex + 1 == 1)
            return triangle[0];
        triangle[1] = {1,1};
        if (rowIndex + 1 == 2)
            return triangle[1];
        for (int i = 2; i <= rowIndex; ++i)
        {
            triangle[i] = vector<int>(i + 1, 1);
            for (int j = 1; j < i; ++j)
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
        return triangle[rowIndex];
    }
};