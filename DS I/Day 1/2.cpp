class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cur = 0;
        int max_ = -10001;
        for(int i : nums){
            cur += i;
            if(cur > max_){
                max_ = cur;
            }
            if (cur < 0){
                cur = 0;
            }
        }
        return max_;
    }
};
