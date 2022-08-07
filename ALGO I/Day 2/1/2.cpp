class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l = nums.size(),i = 0;
        vector<int> sq(l);
        while(i<l && nums[i]<0){
            i++;
        }
        //cout << i << "\n";
        int j = i-1, k = 0;
        while(i<l && j>-1){
            if((nums[i]*nums[i])<(nums[j]*nums[j])){
                sq[k] = nums[i]*nums[i];
                i++;
            }
            else{
                sq[k] = nums[j]*nums[j];
                j--;
            }
            k++;
        }
        while(i<l){
            sq[k] = nums[i]*nums[i];
            i++;
            k++;
        }
        while(j>-1){
            sq[k] = nums[j]*nums[j];
            j--;
            k++;
        }
        return sq;
    }
};
