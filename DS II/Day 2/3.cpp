class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0;
        int one = 0;
        int two = 0;
        for(int i : nums){                 // count
            if(i==0) zero++;
            else if (i==1) one++;
            else two++;
        }
        
        for(int &i : nums){                // sort
            if(zero){
                i = 0;
                zero--;
            }
            else if(one){
                i = 1;
                one--;
            }
            else i = 2;
        }
    }
};
