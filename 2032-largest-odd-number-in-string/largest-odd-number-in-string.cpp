class Solution {
public:
    string largestOddNumber(string num) {
        int k = num.length();
        int l = num.length()-1;
        for(int i=k-1; i>=0; i--){
             l--;
            if(num[i]%2!=0){
                return num.substr(0,i+1);
            } 
        
              
        } 
        return "";
    }
};