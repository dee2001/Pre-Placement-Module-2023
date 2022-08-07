class Solution {
public:
    int firstBadVersion(int n) {
        int i = 1;
        int l = n;
        int firstbad;
        int mid;
        while(i<=l){
            mid = i+((l-i)/2);
            if (isBadVersion(mid)){
                firstbad = mid;
                l = mid-1;
                continue;
            }
            else if(!(isBadVersion(mid))){
                i = mid+1;
            }
        }
        return firstbad;
    }
};
