class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i = 0;
        int j = nums.size()-1 ;
        int temp = 0;
        
        while ( i < j) {
            
            if (nums[i] % 2 != 0 && nums[j] %2 == 0) {
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                i++;
                j--;
            }
            
            else if (nums[i] % 2 == 0 ) {
                i++;
            }
            
            else if (nums[j] % 2 != 0) {
                j--;
            }
        }
        
        
        return nums;
    }
};