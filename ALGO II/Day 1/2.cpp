class Solution {
public:
    int min_element(vector<int>& nums){          // funct to find min element
        int i = 0, j = nums.size()-1;
        int min = nums[j];
        int ind = j;
        while(i<=j){
            int mid = (i+j)/2;
            if(nums[mid]<min){
                min = nums[mid];
                j = mid-1;
                ind = mid;
            }
            else{
                i = mid+1;
            }
        }
        return ind;
    }
    
    int binary_search(vector<int>& nums, int target,int i, int j){      // binary search given search scope i.e index renge in which to search
        while(i<=j){
            int mid = (i+j)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if (nums[mid]<target){
                i = mid+1;
            }
            else{
                j = mid-1;
            }
        }
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        int min_ind = min_element(nums);
        if (nums[min_ind]==target) return min_ind;
        int x = binary_search(nums,target,min_ind,nums.size()-1);        // splitting array based in min element
        if (x!=-1){
            return x;
        }
        return binary_search(nums,target,0,min_ind-1);                        // second split part
    }
};
