class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> a;
        int j=0;
        vector<int> r(2);
        for(int i : nums){
            if(a[target-i]>0 && a[target-i]!=j+1){
                r[1] = j;
                r[0] = a[target-i]-1;
                break;
            }
            else{
                a[i] = j+1;
            }
            j++;
        }
        return r;
    }
};
