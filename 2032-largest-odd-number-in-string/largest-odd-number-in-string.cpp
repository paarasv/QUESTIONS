class Solution {
public:
    string largestOddNumber(string num) {
        for(int i = num.length()-1 ; i>=0; i--){
            int digit;
            digit = num[i] - 48;

            if(digit%2!=0){
                return num.substr(0,i+1);
            } 
            }
            return "";
        }
    
};