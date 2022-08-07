class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        
        sort(intervals.begin(),intervals.end());
        int in = intervals[0][0];
        int jn = intervals[0][1];
        
        for(int i = 1; i<intervals.size(); i++){
            int x = intervals[i][0];
            if(x<=jn){
                int y = intervals[i][1];
                if(y>jn){
                    jn = y;
                }
            }
            else{
                vector<int> curr_int(2);
                curr_int[0] = in;
                curr_int[1] = jn;
                in = x;
                jn = intervals[i][1];
                
                ans.push_back(curr_int);
            }
        }
        vector<int> curr_int(2);
        curr_int[0] = in;
        curr_int[1] = jn;
        ans.push_back(curr_int);
        
        return ans;
    }
};
