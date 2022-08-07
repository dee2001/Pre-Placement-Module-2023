class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int x = 0,y=0;
        for(int i : nums){
            if(i!=0){
                swap(nums[x],nums[y]);
                x++;
            }
            y++;
        }
    }
};
