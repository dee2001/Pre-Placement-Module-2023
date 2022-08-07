class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(), 0);
        int zeroCount = 0;
        int product = 1;
        for(auto el: nums){
            if(el){
                product = product * el;
            }
            else{
                zeroCount++;
            }
            if(zeroCount > 1){
                return ans;
            }
        }
        int index = 0;
        for(auto el: nums){
            if(zeroCount == 1){
                if(el){
                    ans[index++] = 0;
                }else{
                    ans[index++] = product;;
                }
            }else{
                ans[index++] = product / el;
            }
        }
        return ans;

        
    }
};
