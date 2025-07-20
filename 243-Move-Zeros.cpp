class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0;
        int i = 0;
        
        for (i = 0; i < nums.size(); i++ ) {
            if ( nums[i] != 0 ) {
                nums[k] = nums[i];
                k++;
            }
        }
        
        while (k < nums.size()) {
            nums[k] = 0;
            k++;
        }
    }
};