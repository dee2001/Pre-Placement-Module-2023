class Solution {
public:
    bool coloumn(vector<vector<char>>& board,int i, int j){
        char x = board[i][j];
        i++;
        for( ; i<9; i++){
            if(board[i][j] == x){
                return true;
            }
        }
        return false;
    }
    bool row(vector<vector<char>>& board,int i, int j){
        char x = board[i][j];
        j++;
        for( ; j<9; j++){
            if(board[i][j] == x){
                return true;
            }
        }
        return false;
    }
    bool block(vector<vector<char>>& board,int i, int j){
        char x = board[i][j];
        int a = (i/3)*3;
        int b = (j/3)*3;
        j++;
        for(;i < a+3; i++){
            for(;j < b+3; j++){
                if(board[i][j]==x){
                    return true;
                }
            }
            j = b;
        }
        return false;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i<9; i++){
            for(int j = 0; j<9; j++){
                if(board[i][j]=='.'){
                    continue;
                }
                if(coloumn(board,i,j)){
                    //cout << "col\n" << i << ", " << j << "\n";
                    return false;
                }
                if(row(board,i,j)){
                    //cout << "row\n" << i << ", " << j << "\n";
                    return false;
                }
                if(block(board,i,j)){
                    //cout << "block\n" << i << ", " << j << "\n";
                    return false;
                }
            }
        }
        return true;
    }
};
