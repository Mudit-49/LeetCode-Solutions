class Solution {
public:
    int firstocc(vector<int>& arr, int k) {
        int start = 0, end = arr.size() - 1;
        int ans = -1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] == k) {
                ans = mid;
                end = mid - 1;
            } else if (arr[mid] > k) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return ans;
    }
    int lastocc(vector<int>& arr, int k) {
        int start = 0, end = arr.size() - 1;
        int ans = -1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] == k) {
                ans = mid;
                start = mid + 1;
            } else if (arr[mid] > k) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        return {firstocc(nums, target), lastocc(nums, target)};
    }
};