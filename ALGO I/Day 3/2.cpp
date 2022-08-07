class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> a;
        vector<int> s(2);
        int l = numbers.size();
        for(int i=0; i<l; i++){
            if(a[target-numbers[i]] && a[target-numbers[i]]!=i+1){
                s[0] = a[target-numbers[i]];
                s[1] = i+1;
                break;
            }
            else{
                a[numbers[i]] = i+1;
            }
        }
        
        return s;
    }
};
