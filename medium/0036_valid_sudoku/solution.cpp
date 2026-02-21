class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; ++i)
        {
            bitset<9> row;
            bitset<9> col;
            for (int j = 0; j < 9; j++)
            {
                if (board[i][j] != '.')
                {
                    if (row.test(board[i][j] - '1'))
                        return false;
                    row.set(board[i][j] - '1');
                }
                if (board[j][i] != '.')
                {
                    if (col.test(board[j][i] - '1'))
                        return false;
                    col.set(board[j][i] - '1');
                }
            }
        }
        for (int i = 1; i <= 7; i += 3)
        {
            for (int j = 1; j <= 7; j += 3)
            {
                bitset<9> block;
                for (int y = -1; y <= 1; ++y)
                {
                    for (int x = -1; x <= 1; ++x)
                    {
                        if (board[i + y][j + x] != '.')
                        {
                            if (block.test(board[i + y][j + x] - '1'))
                                return false;
                            block.set(board[i + y][j + x] - '1');
                        }
                    }
                }
            }
        }
        return true;
    }
};
