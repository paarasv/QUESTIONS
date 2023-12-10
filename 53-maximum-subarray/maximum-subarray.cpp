class Solution {
public:
    int maxSubArray(std::vector<int>& nums) {
        int n = nums.size();
        int maxSum = std::numeric_limits<int>::min();
        int currentSum = 0;

        for (int i = 0; i < n; i++) {
            currentSum += nums[i];
            maxSum = std::max(currentSum, maxSum);

            if (currentSum < 0) {
                currentSum = 0;
            }
        }

        return maxSum;
    }
};