class Solution {
public:
    vector<int> partitionLabels(string s) 
    {
        int n = s.size();
        map<char, int>lastIdx;
        for (int i = 0; i < n; i++) lastIdx[s[i]] = i; //stores the last occurring index of any character
        //=========================
        int low = 0, high = 0; //assuming partition(window) from low to high(can/cannot be valid window)
        vector<int>ans; 
        int i = 0;
        while(i < n) //"i" is the iterating index over the window
        {
            while(i <= high) //keep expanding the partition while the window is invalid
            {
                int nextHigh = lastIdx[s[i]];
                //in the current window last occurance of s[i] is at nextHigh
                
                if (nextHigh > high) high = nextHigh;
                //if the last occurance exceeds the range of current window, expand the window
                i++;
            }
            int len = high - low + 1;
            ans.push_back(len);
            low = i; high = i; //resetting the window 
        }
        return ans; 
    }
};
