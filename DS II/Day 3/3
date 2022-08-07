class Solution {
public:
    void print(vector<vector<int>>& matrix, int rS, int rE, int cS, int cE, int &n){
        for(int i = cS; i <= cE; i++){
            matrix[rS][i] = n++;
        }
        for(int i = rS+1; i <= rE; i++){
            matrix[i][cE] = n++;
        }
        for(int i = cE-1; i >= cS; i--){
            if(rS == rE){
                break;
            }
            matrix[rE][i] = n++;
        }
        for(int i = rE-1; i > rS; i--){
            if(cS==cE)
                break;
            matrix[i][cS] = n++;
        }
    }
    vector<vector<int>> generateMatrix(int n) {
        if(n==1){
            return {{1}};
        }
        vector<vector<int>> matrix(n,vector<int>(n));
        int rS = 0;
        int rE = matrix.size()-1;
        int cS = 0;
        int cE = matrix[matrix.size()-1].size()-1;
        int i = 1;
        while( rS<=rE && cS <= cE){
            print(matrix,rS,rE,cS,cE,i);
            rS++;
            rE--;
            cS++;
            cE--;
        }
        
        return matrix;
        
    }
};
