class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = -1;
        int i = 0, j = matrix.size()-1;
        while(i<=j){
            int mid = (i+j)/2;
            if(matrix[mid][0]==target){
                return true;
            }
            else if (matrix[mid][0]<target){
                l = mid;
                i = mid+1;
            }
            else{
                j = mid-1;
            }
        }
        if(l==-1){
            return false;
        }
        return binary_search(matrix[l].begin(),matrix[l].end(),target);
    }
};
