class Solution {
public:
    string reverseWords(string& s) {
        string res = "";
        while(s.length()>0){
            string x = "";
            while(s[0]!=' ' && s.length()>0){
                x = s[0]+x;
                s.erase(0,1);
                //cout << x << " " << s.length() << "\n";
            }
            res += x;
            res += " ";
            //cout << res << "\n";
            s.erase(0,1);
        }
        res.erase(res.end()-1);
        return res;
    }
};
