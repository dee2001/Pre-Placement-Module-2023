class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0){
            return false;
        }
        if(n==1){
            return true;
        }
        int flag = 0;
        while(n>0){
            if(n&1){
                flag++;
            }
            n = n>>1;
         }
        return flag == 1;
    }
};
