class Solution {
public:
    int climbStairs(int n) {
      if (n==1){
            return 1;
        }
        if (n==2){
            return 2;
        }
        int x=3,f2=1,f1=2;
        int res ;
        while(x<=n){
            res = f1 +f2;
            f2 = f1;
            f1 = res;
            x++;
        }
        return res;  
    }
};
