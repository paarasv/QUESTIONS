#include <vector>
#include <map>

class Solution {
public:
    int findDuplicate(std::vector<int>& nums) {
        std::map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        for (auto i : mp) {
            if (i.second >= 2) {
                return i.first; // Return the first duplicate found
            }
        }

        // If no duplicates are found, you might want to handle this case appropriately
        return -1; // Replace -1 with a default value or handle the case when no duplicate is found.
    }
};
