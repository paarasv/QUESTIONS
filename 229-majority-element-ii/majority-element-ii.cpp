class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int k = nums.size();
        int n = k/3;
        vector<int> majority;
        unordered_map<int,int>mp;
        for(int i=0; i<k;i++){
            mp[nums[i]]++;
        }
        for(auto i:mp){
            if(i.second>n){
                majority.push_back(i.first);
            }
        }
        return majority;
    }
};