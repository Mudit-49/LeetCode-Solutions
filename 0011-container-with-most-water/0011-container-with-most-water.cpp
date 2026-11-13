class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size() - 1;
        int max_area = min(height[i], height[j]) * (j - i);

        while (i < j) {
            if (i < j && height[i] < height[j]) {
                i++;
            }
            else {
                j--;
            }
            int cur_area = (j - i) * min(height[i], height[j]);
            max_area = max(max_area, cur_area);
        }
        return max_area;
    }
};