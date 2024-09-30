class Solution {
public:
    bool isPalindrome(string s) {
        int l = s.size()-1;
        int st=0;

        while(st<l){
            if(!isalnum(s[st])){
                st++;
            } else if(!isalnum(s[l])){
                l--;
            } else if(tolower(s[st])!=tolower(s[l])){
                return false;
            } else {
                st++;
                l--;
            }
        }
        return true;
    }       
};