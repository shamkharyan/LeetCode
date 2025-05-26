class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int n = grid.size();
        int area = 0;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                area += grid[i][j] == 0? 0 : 2; //bottom and top
                if (i - 1 < 0)
                    area += grid[i][j];
                else if (grid[i][j] > grid[i - 1][j])
                    area += grid[i][j] - grid[i - 1][j];
                if (i + 1 == n)
                    area += grid[i][j];
                else if (grid[i][j] > grid[i + 1][j])
                    area += grid[i][j] - grid[i + 1][j];
                if (j - 1 < 0)
                    area += grid[i][j];
                else if (grid[i][j] > grid[i][j - 1])
                    area += grid[i][j] - grid[i][j - 1];
                if (j + 1 == n)
                    area += grid[i][j];
                else if (grid[i][j] > grid[i][j + 1])
                    area += grid[i][j] - grid[i][j + 1];
            }
        }
        return area;
    }
};
