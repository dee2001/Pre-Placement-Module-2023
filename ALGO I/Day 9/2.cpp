class Solution:
    def orangesRotting(self, grid: List[List[int]]) -> int:
        fresh = 0
        q = deque()
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if grid[i][j]==1:
                    fresh += 1
                if grid[i][j]==2:
                    q.appendleft((i,j))
        #print(q)
        if fresh == 0:
            return 0
        dirn = {(0,1),(0,-1),(-1,0),(1,0)}
        t = -1
        while q:
            l = len(q)
            #print(l)
            while l > 0:
                i,j = q.pop()
                for x,y in dirn:
                    a,b = i+x,j+y
                    if -1<a<len(grid) and -1<b<len(grid[0]) and grid[a][b]==1:
                        fresh-=1
                        grid[a][b]=2
                        q.appendleft((a,b))
                l -= 1
            t += 1
        if fresh != 0:
            return -1
        return 
