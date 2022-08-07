class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_ = 0;
        int i=0, j=0;
        for(; j<prices.size();j++){
            if(prices[j]<prices[i]){
                i = j;
                continue;
            }
            int profit = prices[j]-prices[i];
            max_ = max(profit,max_);
        }
        return max_;
    }
};
