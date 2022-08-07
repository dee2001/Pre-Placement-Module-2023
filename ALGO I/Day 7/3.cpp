class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int maxA=0,x=0;
        int area=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                {
                    area=helper(grid,i,j,x);
                    maxA=max(maxA,area);
                }
            }
        }
        return maxA;
    }
    
    int helper(vector<vector<int>>& grid,int r, int c, int area)
    {
        grid[r][c]=0;
        if(r>0 && grid[r-1][c]==1)//up
        {
            // area+=1;
            area=helper(grid,r-1,c,area);
        }
        if(c>0 && grid[r][c-1]==1)//left
        {
            // area+=1;
            area=helper(grid,r,c-1,area);
        }
        if(r<grid.size()-1 && grid[r+1][c]==1)//down
        {
            // area+=1;
            area=helper(grid,r+1,c,area);
        }
        if(c<grid[0].size()-1 && grid[r][c+1]==1)//right
        {
            // area+=1;
            area=helper(grid,r,c+1,area);
        }
        return 1+area;
    }
};
