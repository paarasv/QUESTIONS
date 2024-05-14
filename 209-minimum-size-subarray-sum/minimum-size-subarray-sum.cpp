#include <vector>
#include <climits>

class Solution {
public:
    int minSubArrayLen(int target, std::vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX; // Initialize the minimum length of subarray
        int sum = 0; // Initialize the sum of the current window
        int left = 0; // Initialize the left pointer
        
        for (int right = 0; right < n; right++) { // Iterate over the array
            sum += nums[right]; // Add the current element to the sum
            
            while (sum >= target) { // Shrink the window as long as the sum is greater than or equal to the target
                mini = std::min(mini, right - left + 1); // Update the minimum length of subarray
                sum -= nums[left++]; // Remove the leftmost element from the window
            }
        }
        
        return (mini == INT_MAX) ? 0 : mini; // Return the minimum length of subarray
    }
};
