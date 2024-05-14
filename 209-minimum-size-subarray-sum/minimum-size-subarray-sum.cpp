#include <vector>
#include <climits>

class Solution {
public:
    int minSubArrayLen(int target, std::vector<int>& nums) {
        int i = 0;
        int j = 0; // Initialize j to 0
        int mini = INT_MAX;
        int n = nums.size();
        long long sum = 0;
        
        while (j < n) { // Change loop condition
            sum += nums[j]; // Add nums[j] to sum
            
            while (sum >= target) { // Check if sum exceeds or equals target
                mini = std::min(mini, j - i + 1); // Update mini
                sum -= nums[i]; // Remove nums[i] from sum
                i++; // Move i forward
            }
            
            j++; // Move j forward
        }
        
        return (mini == INT_MAX) ? 0 : mini; // Return 0 if mini is not updated
    }
};
