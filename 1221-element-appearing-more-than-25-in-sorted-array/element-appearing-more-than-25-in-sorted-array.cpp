class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        map<int, int> mp;
        for(int i=0; i<arr.size(); i++){
            mp[arr[i]]++;
        }
        int max =0;
        int update;
        for(auto i: mp){
           if(i.second > max){
               max = i.second;
               update = i.first;
               //update = i.first;
           }
        }
        return update ;
    }
};