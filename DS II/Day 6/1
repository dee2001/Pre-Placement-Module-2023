class Solution {
public:
    string addStrings(string a, string b) {
        int m=a.size(),n=b.size(),c=0;
        string ans;
        while(m and n){
            int s=c+(a[m-1]-48)+(b[n-1]-48);
            if(s > 9){
                ans.push_back((s%10)+48);
                c=1;
            }
            else{
                ans.push_back(s+48);
                c=0;
            }
            m--;n--;
        }
        while(m){
            int s=c+(a[m-1]-48);
            if(s > 9){
                ans.push_back((s%10)+48);
                c=1;
            }
            else{
                ans.push_back(s+48);
                c=0;
            }
            m--;
        }
        while(n){
            int s=c+(b[n-1]-48);
            if(s > 9){
                ans.push_back((s%10)+48);
                c=1;
            }
            else{
                ans.push_back(s+48);
                c=0;
            }
            n--;
        }
        if(c) ans.push_back(49);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
