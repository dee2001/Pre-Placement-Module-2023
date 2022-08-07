class Solution {
public:
    void fn(int num, int n, int k, vector<vector<int>> &res, vector<int> &t)
    {
        if(k==0)    
        {
            res.push_back(t);
            return;
        }   
        if(n-num+1<k){ 
            return;
        }
        
        fn(num+1,n,k,res,t);    // not taking current number.
        t.push_back(num);       // we will take the current number
        fn(num+1,n,k-1,res,t);  // Current number taken!!
        t.pop_back();           // reverting the status of t back to the condition in which it was before.
    }

    vector<vector<int>> combine(int n, int k) 
    {
        vector<vector<int>> res;
        vector<int> t;
        fn(1,n,k,res,t);
        return res;
    }
};
