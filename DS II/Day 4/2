class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
	// sorting on the first index 
        sort(intervals.begin(),intervals.end());
        int ans = 0 ;
        
        int prev=0;
         
        // [1,2] [2,3]
        // prev       curr -> i'll move curr 
        // [1,5] [2,5]
                    // prev  curr -->i'll move prev(keeping small to maximize the chance of non overlapping  )
        for(int curr=1;curr<size(intervals);curr++)
        {
            // overlapping
            if(intervals[prev][1]>intervals[curr][0])
            {
                ans++;
                if(intervals[prev][1]>=intervals[curr][1])
                {
                    prev=curr;
                }
            }
            // non-overlapping
            // [1,2] [5,9] move prev to check for next intervals
            else{
                prev= curr;
            }
        }
        return ans;
       
    }
};
