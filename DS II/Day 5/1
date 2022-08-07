class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        vector<int> tail;
        
        for(int num : nums){
            if(tail.empty() || num > tail.back()){
                tail.push_back(num);
            }
            else{
                tail[firstGreatEqual(tail, num)] = num;
            }
        }
        
        return tail.size() >= 3;
    }
private:
    int firstGreatEqual(vector<int>& t, int tr){
        return lower_bound(t.begin(), t.end(), tr) - t.begin();
    }
};
