#include <vector>

class Solution {
public:
    int missingNumber(std::vector<int>& nums) {
        int n = nums.size();
        // Calculate the sum of numbers in the range [0, n]
        int expectedSum = n * (n + 1) / 2;
        // Calculate the actual sum of elements in the array
        int actualSum = 0;

        for (int num : nums) {
            actualSum += num;
        }

        // The missing number is the difference between the expected sum and the actual sum
        return expectedSum - actualSum;
    }
};
