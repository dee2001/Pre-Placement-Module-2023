class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int curr = 0;
        int x = 0;
        for(int i:nums){            // idea is that majority element frequency is more than n/2
            if (curr==0){
                x = i;
                curr = 1;
            }
            else if (i==x) curr++;    
            else curr--;
        }
        return x;
    }
};
