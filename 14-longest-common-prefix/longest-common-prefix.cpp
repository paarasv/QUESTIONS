class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       int k = strs.size()-1;
       int p = strs[0].size();
       string ans = "";
        sort(strs.begin(), strs.end());
        string aage = strs[0] , piche = strs[k];
        for(int i=0; i<p; i++){
            if(aage[i]!=piche[i]){
                break;
            }
            ans=ans+aage[i];
        }
return ans;
    }

};