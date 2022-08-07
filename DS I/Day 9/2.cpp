class Solution {
public:
    bool isValid(string s) {
        int len_s = s.length();
        if(len_s == 1){
            return false;
        }
        stack<char> open;
        for(int i = 0; i<len_s; i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                open.push(s[i]);
            }
            else{
                if(open.empty()){
                    return false;
                }
                if(s[i] == ')'){
                    if(open.top() != '(') return false;
                }
                else if (s[i] == '}'){
                    if(open.top() != '{') return false;
                }
                else{
                    if(open.top() != '[') return false;
                }
                open.pop();
            }
        }
        if(open.empty()){
            return true;
        }
        return false;
    }
};
