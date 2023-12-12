class Solution {
public:
    int maxArea(std::vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int max = 0;
        while (left < right) {
            int w = right - left;
            int h = std::min(height[left], height[right]);
            int area = h * w;
            max = std::max(max, area);
            if (height[left] < height[right]) {
                left++;
            } else if (height[left] > height[right]) {
                right--;
            } else {
                left++;
                right--;
            }
        }
        return max;
    }
};