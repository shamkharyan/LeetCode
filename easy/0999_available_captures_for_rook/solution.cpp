class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board)
    {
        int rookI;
        int rookJ;
        bool exit = false;
        for (rookI = 0; rookI < 8; ++rookI)
        {
            for (rookJ = 0; rookJ < 8; ++rookJ)
            {
                if (board[rookI][rookJ] == 'R')
                {
                    exit = true;
                    break;
                }
            }
            if (exit)
                break;
        }

        int count = 0;
        for (int i = rookI + 1; i < 8; ++i)
        {
            if (board[i][rookJ] == 'p')
                ++count;
            if (board[i][rookJ] != '.')
                break;
        }
        for (int i = rookI - 1; i >= 0; --i)
        {
            cout << i << endl;
            if (board[i][rookJ] == 'p')
                ++count;
            if (board[i][rookJ] != '.')
                break;
        }
        for (int j = rookJ - 1; j >= 0; --j)
        {
            if (board[rookI][j] == 'p')
                ++count;
            if (board[rookI][j] != '.')
                break;
        }
        for (int j = rookJ + 1; j < 8; ++j)
        {
            if (board[rookI][j] == 'p')
                ++count;
            if (board[rookI][j] != '.')
                break;
        }
        return count;
    }
};
