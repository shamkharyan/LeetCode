class Solution
{
public:
    bool isAttacked(const vector<int>& queens, int row, int col)
    {
        for (int j = 0; j < col; ++j)
        {
            if (queens[j] == row)
                return true;
            if (abs(j - col) == abs(queens[j] - row))
                return true;
        }
        return false;
    }

    void solve(vector<int>& queens, int col, int& count)
    {
        int n = queens.size();
        for (int i = 0; i < n; ++i)
        {
            if (!isAttacked(queens, i, col))
            {
                queens[col] = i;
                if (col == n - 1)
                    ++count;
                else
                    solve(queens, col + 1, count);
                queens[col] = -1;
            }
        }
    }

    int totalNQueens(int n)
    {
        vector<int> queens(n, -1);
        int count = 0;

        solve(queens, 0, count);
        return count;
    }
};
