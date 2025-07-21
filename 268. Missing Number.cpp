class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;
        int m = 0;
        sort(nums.begin(), nums.end());
         while (l <= r) {
            m = (l + r) / 2;
            if (nums[m] > m) {
                r = m - 1;
            }
            else if (nums[m] <= m) {
                l = m + 1;
            }
         }
         return l;
    }
};