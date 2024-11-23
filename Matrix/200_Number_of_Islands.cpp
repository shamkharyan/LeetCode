class Solution {
public:
    void fill(vector<vector<char>>& grid, int i, int j)
    {
        grid[i][j] = '0';
        if (i != grid.size() - 1 && grid[i + 1][j] != '0')
            fill(grid, i + 1, j);
        if (i != 0 && grid[i - 1][j] != '0')
            fill(grid, i - 1, j);
        if (j != grid[0].size() - 1 && grid[i][j + 1] != '0')
            fill(grid, i, j + 1);
        if (j != 0 && grid[i][j - 1] != '0')
            fill(grid, i, j - 1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (grid[i][j] == '1')
                {
                    ++count;
                    fill(grid, i, j);
                }
            }
        }
        return count;
    }
};