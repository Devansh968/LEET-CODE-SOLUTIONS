class Solution {
public:
    bool    isValidSudoku(vector<vector<char>>& board)
    {
        int     x, y;

        x = -1;
        while (++x < 9)
        {
            y = -1;
            while (++y < 9)
            {
                if (board[x][y] != '.' && (!check_row(board, x, y) 
                    || !check_col(board, x, y) || !check_box(board, x, y)))
                    return (false);
            }
        }
        return (true);
    }

    /* ------------------------------ */

    bool    check_row(vector<vector<char>>& board, int x, int y)
    {
        int     i = -1;
        
        while (++i < 9)
        {
            if (i != x && board[x][y] == board[i][y])
                return (false);
        }
        return (true);
    }
    
    bool    check_col(vector<vector<char>>& board, int x, int y)
    {
        int     i = -1;
        
        while (++i < 9)
        {
            if (i != y && board[x][y] == board[x][i])
                return (false);
        }
        return (true);
    }
    
    bool    check_box(vector<vector<char>> & board, int x, int y)
    {
        int     rr, cc, i, j;

        rr = x / 3 * 3;
        cc = y / 3 * 3;
        i = rr - 1;
        while (++i < rr + 3)
        {
            j = cc - 1;
            while (++j < cc + 3)
            {
                if (board[i][j] == board[x][y] && x != i && y != j)
                    return (false);
            }
        }
        return (true);
    }
};