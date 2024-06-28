class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int i=0;
        int n = s.size();
        while(i<n){
        if(st.empty()){
            st.push(s[i]);
            i++;
        } else if(st.top()=='(' && s[i]==')'||
                  st.top()=='[' && s[i]==']'||
                  st.top()=='{' && s[i]=='}'){
                    st.pop();
                    i++;
                  } else {
                    st.push(s[i]);
                    i++;
                  }
    }
    if(st.size()==0){
        return true ;
    } else {
        return false ;
    }
    }
};