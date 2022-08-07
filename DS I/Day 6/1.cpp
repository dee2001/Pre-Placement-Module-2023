class Solution {
public:
    int firstUniqChar(string s) {
        int arr[26] = {0};
        for(char i:s){
            arr[((int)i)-97]++;
        }
        int x = 0;
        for(char i : s){
            if (arr[((int)i)-97]==1){
                return x;
            }
            x++;
        }
        return -1;
    }
};
