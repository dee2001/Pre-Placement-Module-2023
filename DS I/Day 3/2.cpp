class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size(),n=nums2.size();
        unordered_map<int,int> d;
        vector<int> res;
        for(int i=0;i<m;i++){
            d[nums1[i]]++;
        }
        
        for(int i=0;i<n;i++){
            if(d[nums2[i]]>0){
                res.push_back(nums2[i]);
                d[nums2[i]]--;
            }
        }
        
        return res;
    }
};
