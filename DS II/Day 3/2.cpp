class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        for(vector<int> &i:matrix){
            reverse(i.begin(),i.end());
        }
        int j = matrix.size()-1;
        for(int i = 0; i<matrix.size(); i++,j--){
            int k = 0;
            int l = matrix.size()-1;
            while(k<matrix.size()-i){
                swap(matrix[i][k],matrix[l][j]);
                k++;
                l--;
            }
        }
    }
};
