class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if(mat.size()*mat[0].size() != r*c)
            return mat;
        vector<vector<int>> res(r,vector<int> (c,0));
        int k =0, l= 0;
        for(int i =0; i<r; i++){
            for(int j = 0; j<c; j++){
                res[i][j]=mat[k][l];
                l++;
                if(l==mat[0].size()){
                    k++;
                    l = 0;
                }
            }
        }
        return res;
    }
};
