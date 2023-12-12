class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int>vt;
         map<int , int> mp;
         for(int i =0; i<nums.size(); i++){
             mp[nums[i]]++;
         }
         nums.clear();

         for(auto i: mp){
             for(int j =0; j<i.second; j++){
                 nums.push_back(i.first);

             }
         }
        
    }
};