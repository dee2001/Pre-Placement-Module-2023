class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0;
        /*for(int i = 0;i<300;i++){
            arr[i]= -1;
        }*/
        for(int i = 0; i<s.length();i++){
            int j = i,l=0;
            int arr[300] = {0};
            while(j<s.length()){
                //arr[j]=0;
                if(arr[s[j]]!=1){
                    arr[s[j]]=1;
                    //cout << s[j] << " ";
                    j++;
                    l++;
                }
                else{
                    break;
                }
            }
            //cout << endl;
            if(l>ans){
                ans = l;
            }
        }
        return ans;
    }
};
