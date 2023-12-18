#include <vector>
#include <algorithm>

class Solution {
public:
    int longestConsecutive(std::vector<int>& nums) {
        if (nums.empty()) {
            return 0;  // If the vector is empty, the longest consecutive sequence length is 0.
        }

        std::sort(nums.begin(), nums.end());
        int count = 1;  // Initialize count to 1 for the first element.
        int maxi = 1;

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i + 1] - nums[i] == 1) {
                count++;
                maxi = std::max(maxi, count);
            } else if (nums[i+1]!= nums[i]) {
                count = 1;  // Reset count if there is a gap or duplicates.
            }
        }

        return maxi;
    }
};
