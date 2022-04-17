class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        if (moves.size() < 5) {
            return "Pending";
        }
        vector<vector<char>> board(3, vector<char>(3, '.'));
        for (int i = 0; i < moves.size(); ++i) {
            if (i % 2 == 0) {
                board[moves[i][0]][moves[i][1]] = 'x';
            }
            else {
                board[moves[i][0]][moves[i][1]] = 'o';
            }
        }
        for (int i = 0; i < board.size(); ++i) {
            if (board[i][0] != '.' and board[i][0] == board[i][1] and board[i][1] == board[i][2]) {
                if (board[i][0] == 'x') {
                    return "A";
                }
                else {
                    return "B";
                }
            }
            if (board[0][i] != '.' and board[0][i] == board[1][i] and board[1][i] == board[2][i]) {
                if (board[0][i] == 'x') {
                    return "A";
                }
                else {
                    return "B";
                }
            }
        }
        if (board[0][0] != '.' and board[0][0] == board[1][1] and board[1][1] == board[2][2]) {
            if (board[0][0] == 'x') {
                return "A";
            }
            else {
                return "B";
            }
        }
        if (board[0][2] != '.' and board[0][2] == board[1][1] and board[1][1] == board[2][0]) {
            if (board[0][2] == 'x') {
                return "A";
            }
            else {
                return "B";
            }
        }
        if (moves.size() == 9) {
            return "Draw";
        }
        return "Pending";
    }
};