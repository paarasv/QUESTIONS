class Solution {
public:
    string largestOddNumber(string num) {
        int k = num.length();
        int l = num.length();
        for(int i=k-1; i>=0; i--){
             l--;
            if(num[i]%2!=0){
                return num.substr(0,l+1);
            } 
        
              
        } 
        return "";
    }
};