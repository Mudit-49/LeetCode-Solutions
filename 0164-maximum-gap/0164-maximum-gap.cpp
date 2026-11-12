class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int max_dif = 0;
        for (int i = 0; i + 1 < nums.size(); i++) {
            int d = nums[i + 1] - nums[i];
            max_dif = max(max_dif, d);
        }
        return max_dif;
    }
};