class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int i = 0;
        int j = nums.size()-1;
        
        if(j==0){
            return 0;
        }
        
        while(i<=j){
            int mid = (i+j)/2;
            if(mid>0 && mid<nums.size()-1){
                if (nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
                    return mid;
                }
                else if(nums[mid-1]>nums[mid]){
                    j = mid-1;
                }
                else{
                    i = mid+1;
                }
            }
            else {            // case when mid is at ends of array
                if(mid==0){
                    if(nums[0]>nums[1])       // handle it seperately
                        return 0;
                    else i = mid+1;
                }
                else{
                    if(nums[mid] >nums[mid-1]) return mid;
                    else j = mid-1;
                }
            }
        }
        return i;
    }
};
