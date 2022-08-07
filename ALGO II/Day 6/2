class DSU{
    private:
    vector<int>parent,size;
    public:
    DSU(int n){
        for(int i=0;i<=n;i++){
            parent.push_back(i);
            size.push_back(1);
        }
    }
    void unionSize(int u,int v){
        int pu=findPar(u);
        int pv=findPar(v);
        if(pu==pv) return;
        if(size[pu]<size[pv]){
            parent[pu]=pv;
            size[pv]+=size[pu];
        }
        else{
            parent[pv]=pu;
            size[pu]+=size[pv];
        }
    }
    int findPar(int node){
        if(node==parent[node]) return node;
        return parent[node]=findPar(parent[node]);
    }
};
class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        DSU dsu(n);
        int count=n;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j]==1 and (i!=j)){
                    if(dsu.findPar(i)!=dsu.findPar(j)){
                        dsu.unionSize(i,j);
                        count--;
                    }
                }
            }
        }
        return count;
    }
};
