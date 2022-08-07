class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int l = nums.size();
        if(k%l==0){
            return;
        }
        k = k%l;
        int i = l-k, j = l-1;
        while(i<j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
        i = 0;
        j = l-k-1;
        while(i<j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
        i=0;
        j=l-1;
        while(i<j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
        return;
    }
};
