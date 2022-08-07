class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack <char> ss;
        stack <char> ts;
        bool res;
        
        for(int i = 0; i < s.length(); i++){
            if(s[i] != '#')
                ss.push(s[i]);
            else{
                if(!ss.empty())
                    ss.pop();
            }
        }
        string ns="";
        while(!ss.empty()){
            ns += ss.top();
            ss.pop();
        }
        
         for(int i = 0; i < t.length(); i++){
            if(t[i] != '#')
                ts.push(t[i]);
            else{
                if(!ts.empty())
                    ts.pop();
            }
        }
        
        string nt="";
        while(!ts.empty()){
            nt += ts.top();
            ts.pop();
        }
        
        if(ns == nt)
            res = true;
        else
            res = false;
        return res;
    }
};
