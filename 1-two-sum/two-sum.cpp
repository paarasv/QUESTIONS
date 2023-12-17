class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        map<int,int> mp;
       for(int i =0; i<nums.size(); i++){
               int x = target - nums[i];
               if(mp.find(x)!= mp.end()){
                   return {mp[x] , i};
               } else {
                   mp[nums[i]]=i;
               }

               

                   
               }
return {-1, -1};
    }
};