class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.length()>magazine.length()){
            return false;
        }
        int arr[26]={0};
        for(int i = 0; i<ransomNote.length(); i++){
            arr[ransomNote[i]-'a']++;
        }
        for(int i = 0; i<magazine.length(); i++){
            if(arr[magazine[i]-'a']){
                arr[magazine[i]-'a']--;
            }
        }
        for(int i = 0; i<26; i++){
            if(arr[i]){
                return false;
            }
        }
        return true;
    }
};
