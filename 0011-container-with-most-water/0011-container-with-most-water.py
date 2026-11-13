class Solution:
    def maxArea(self, height: list[int]) -> int:
        i = 0
        j = len(height) - 1
        max_area = min(height[i], height[j]) * (j - i)

        while i < j:
            if i < j and height[i] < height[j]:
                i += 1

            else:
                j -= 1

            cur_area = (j - i) * min(height[i], height[j])
            max_area = max(max_area, cur_area)

        return max_area
