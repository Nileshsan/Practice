class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int n = (int)height.size();
        int j = n - 1;
        int maxArea = 0;

        // maximize area of rectangle
        while (i < j) {

            int curr = min(height[i], height[j]) * (j - i);

            maxArea = max(curr, maxArea);

            if (height[i] < height[j]) {
                i++;
            } else {
                j--;
            }
        }
        return maxArea;
    }
};