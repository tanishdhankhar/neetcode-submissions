class Solution {
public:
    bool valid(int k, int l, int n, int m, vector<vector<char>>& board) {
        for (int i = k; i < n; i++) {
            for (int j = l; j < m; j++) {

                if (board[i][j] == '.') continue;

                char ch = board[i][j];

                // row check
                for (int t = 0; t < m; t++) {
                    if (board[i][t] == ch && t != j) return false;
                }

                // column check
                for (int t = 0; t < n; t++) {
                    if (board[t][j] == ch && t != i) return false;
                }

                // box check
                int startRow = (i / 3) * 3;
                int startCol = (j / 3) * 3;

                for (int r = startRow; r < startRow + 3; r++) {
                    for (int c = startCol; c < startCol + 3; c++) {
                        if ((r != i || c != j) && board[r][c] == board[i][j]) {
                            return false;
                        }
                    }
                }
            }
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        return valid(0, 0, board.size(), board[0].size(), board);
    }
};