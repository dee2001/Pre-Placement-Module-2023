class Solution {
public:
    bool isvalid(pair<int,int> pr,int n, int m)
    {
        int a = pr.first;
        int b = pr.second;
        
        if(a>=0 && a<n && b>=0 && b <m)
            return true;
        return false;
    }
    void solve(pair<int,int> pr, vector<vector<char>>& grid, vector<pair<int,int>> &lands,int n,int m)
    {
        grid[pr.first][pr.second] = '#';
        queue<pair<int,int>> qu;
        qu.push(pr);
        while(!qu.empty())
        {
            pair<int,int> pr = qu.front();
            qu.pop();
             int a = pr.first;
             int b = pr.second;
            pair<int,int> p1 = {a+1,b};
            pair<int,int> p2 = {a-1,b};
            pair<int,int> p3 = {a,b+1};
            pair<int,int> p4 = {a,b-1};
            
            if(isvalid(p1,n,m) && grid[p1.first][p1.second] == '1')
            {
                grid[p1.first][p1.second] = '#';
                qu.push({p1.first,p1.second});
            }
            if(isvalid(p2,n,m) && grid[p2.first][p2.second] == '1')
            {
                grid[p2.first][p2.second] = '#';
                qu.push({p2.first,p2.second});
            }
            if(isvalid(p3,n,m) && grid[p3.first][p3.second] == '1')
            {
                grid[p3.first][p3.second] = '#';
                qu.push({p3.first,p3.second});
            }
            if(isvalid(p4,n,m) && grid[p4.first][p4.second] == '1')
            {
                grid[p4.first][p4.second] = '#';
                qu.push({p4.first,p4.second});
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<pair<int,int>>lands;
        
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(grid[i][j] == '1')
                {
                    pair<int,int> pr = {i,j};
                    lands.push_back(pr);
                }
            }
        }
        
        int res = 0;
        int n1 = lands.size();
        for(int i = 0; i < n1; i++)
        {
            pair<int,int> pr = lands[i];
            int a = pr.first;
            int b = pr.second;
            if(grid[a][b] != '#')
            {
                res++;
                solve(pr,grid,lands,n,m);
            }
        }
        return res;
    }
};
