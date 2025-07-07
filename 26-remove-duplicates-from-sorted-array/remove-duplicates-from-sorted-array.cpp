class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int>mp;
        int k=0;
        for(int i=0; i<nums.size(); i++){
            if(mp.find(nums[i])==mp.end()){
                mp[nums[i]]=1;
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }
};