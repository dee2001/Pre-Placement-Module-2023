class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size();
        if(!m || !n)return false;
        int i=0,j=n-1;
        while(i<m && j>=0){
            if(matrix[i][j]==target)return true;
            else if(matrix[i][j]>target)j--;
            else i++;
        }
        return false;
    }
};
Footer
© 2022 GitHub, Inc.
Footer navigation
Terms
Privacy
Securit
