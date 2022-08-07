class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        vector<int> pos; //To store the indexes of alphabets
		vector<string> ans;
        for(int i=0; i<s.size(); i++)
        {
            if((s[i]>='a'&& s[i]<='z')  ||  (s[i]>='A' &&s[i]<='Z'))
                pos.push_back(i);
        }  // Storing the indexes 
        int m=pos.size();      //No. of alphabets
        for(int i=0;i<pow(2,m);i++)    //The size of answer should be pow(2,m)
        {
            string temp=s;
            int k=i;
            for(int j=0;j<pos.size();j++)
            {
                if(((k>>j)&1)==0){
                    if(temp[pos[j]]>='A' && temp[pos[j]]<='Z'){
                        temp[pos[j]]+=32;
                    }
                }
                else{
                    if(temp[pos[j]]>='a' && temp[pos[j]]<='z'){
                        temp[pos[j]]-=32;                      
                    }
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
