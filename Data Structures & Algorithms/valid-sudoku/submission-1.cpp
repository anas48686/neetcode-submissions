class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool rows[9][9] = {false}; // ek row m saare num ko false kiya h ki not present h [rowidx][num]
        bool cols[9][9] = {false}; // ek col m saare num ko false kiya h ki not present h [colidx][num]
        bool boxes[9][9] = {false}; // ek box m saare num ko false kiya h ki not present h [boxidx][num]
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++){
                if(board[i][j] != '.') {
                    int num = board[i][j] - '1';
                    int boxIdx = (i / 3) * 3 + j / 3;
                    if(rows[i][num] || cols[j][num] || boxes[boxIdx][num])
                        return false;
                    rows[i][num] = true;
                    cols[j][num] = true;
                    boxes[boxIdx][num] = true;
                }
            }
        }
        return true;
    }
};
