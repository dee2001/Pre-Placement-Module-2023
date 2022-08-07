int longestPalindrome(string s) {
        int a[123]={0},flag=0;
        int c=0;
        for(int i=0; i<s.size(); i++)
            a[s[i]]++;
        for(int i=65; i<123;i++)
        {
            if(a[i]%2==0)
                c+=a[i];
            else{
                c+=a[i]-1;
                flag=1;
            }
        }
        return c+flag;
    }
