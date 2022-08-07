class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        unordered_map<int,int> hash;
        
        for(int i = 0; i < nums.size(); i++){
            hash[nums[i]]=i;
        }
        
        for(int i = 0; i < nums.size()-2; i++){
            if(i && nums[i]==nums[i-1]) continue;
            for(int j = i+1; j < nums.size()-1; j++){
                if(j>i+1 && nums[j]==nums[j-1]) continue;
                int s = -1*(nums[i] + nums[j]);
                if(hash[s]>j){
                    vector<int> x(3);
                    x[0] = nums[i];
                    x[1] = nums[j];
                    x[2] = nums[hash[s]];
                    ans.push_back(x);
                }
            }
        }
        return ans;
    }
};
