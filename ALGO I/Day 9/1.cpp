class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        vector<int> dir={0,1,0,-1,0};
        queue<pair<int, int>> q;
        int n=mat.size(), m=mat[0].size();
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                if(mat[i][j]==0) q.push({i,j});
        vector<vector<int>> ans(n, vector<int>(m, 0));
        while(q.size()){
            auto [i,j]=q.front();
            q.pop();
            if(i<0 || j<0 || i>=n || j>=m)
                continue;
            //mat[i][j]=0;
            for(int k=0; k<4; k++)
            {
                int ni=i+dir[k];
                int nj=j+dir[k+1];
                if(ni<0 || nj<0 || ni>=n || nj>=m || mat[ni][nj]==0)
                    continue;
                mat[ni][nj]=0;
                ans[ni][nj]=ans[i][j]+1;
                q.push({ni, nj});
            }
        }
        return ans;
    }
};
