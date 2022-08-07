class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> arr;
        vector<int> x;
        x.push_back(1);
        arr.push_back(x);
        //return arr;
        for(int i = 1; i<=rowIndex; i++){
            vector<int> a;
            a.push_back(1);
            for(int j = 1; j<i;j++){
                a.push_back(arr[i-1][j-1]+arr[i-1][j]);
            }
            a.push_back(1);
            arr.push_back(a);
        }
        return arr[rowIndex];
    }
};
