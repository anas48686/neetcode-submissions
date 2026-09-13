class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < 9; i++) {
            unordered_map<char, int> freqInRow;
            for(int j = 0; j < 9; j++){
                if(isdigit(board[i][j])) {
                    freqInRow[board[i][j]]++;
                    if(freqInRow[board[i][j]] > 1) 
                        return false;
                }
            }
        }
        for(int j = 0; j < 9; j++) {
            unordered_map<char, int> freqInCol;
            for(int i = 0; i < 9; i++){
                if(isdigit(board[i][j])) {
                    freqInCol[board[i][j]]++;
                    if(freqInCol[board[i][j]] > 1)
                        return false;
                }
            }
        }
        for(int  i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                unordered_map<char, int> freqInSubBoxes;
                for(int k = 0; k < 3; k++){
                    for(int l = 0; l <3; l++){
                        if(isdigit(board[i * 3 + k][j * 3 + l])) {
                        freqInSubBoxes[board[i * 3 + k][j * 3 + l]]++;
                        if(freqInSubBoxes[board[i * 3 + k][j * 3 + l]] > 1) 
                            return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};
