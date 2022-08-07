class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& f, vector<vector<int>>& s) {
        int i=0,j=0,flen=f.size(),slen=s.size();
        vector<vector<int>> ans;
        while(i<flen && j<slen){
            int t1=max(f[i][0],s[j][0]);
            int t2=min(f[i][1],s[j][1]);
            if(t1<=t2)ans.push_back({t1,t2});
            if(f[i][1]<s[j][1])i++;
            else j++;
        }
        return ans;
    }
};
