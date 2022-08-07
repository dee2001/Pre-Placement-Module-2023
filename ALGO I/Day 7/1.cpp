class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()){
            return false;
        }
        vector<int> rec(26,0);
        for(int i = 0; i<s1.length(); i++){
            //cout << s1[i]-'a' << "\n";
            rec[s1[i]-'a']++;
        }
        //cout << "ran\n";
        /*for(int i =0; i<26; i++){
            cout << rec[i] << " ";
        }*/
        //cout << "\n";
        for(int i = 0; i<s2.length(); i++){
            vector<int> chec(rec.begin(),rec.end());
            //cout << 
            if(chec[s2[i]-'a']){
                int k = i;
                while(k<s2.length()){
                    if(chec[s2[k]-'a']){
                        chec[s2[k]-'a']--;
                    }
                    else{
                        break;
                    }
                    k++;
                }
                int flag = 0;
                for(int j = 0; j<26; j++){
                    if(chec[j]!=0){
                        flag = 1;
                        break;
                    }
                }
                if (flag==0){
                    return true;
                }
            }
        }
        return false;
    }
};
