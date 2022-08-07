class Solution {
public:
    void permute(vector<int>& nums,int i,vector<vector<int>>& ans ){
        // base case 
        if(i==nums.size()){
            ans.push_back(nums);
            return;
        }
        
        // recursive case
        for(int j = i; j<nums.size(); j++){
            swap(nums[i],nums[j]);
            permute(nums,i+1,ans);
            swap(nums[i],nums[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> a;
        permute(nums,0,a);
        return a;
    }
};
