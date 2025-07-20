class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i= 0;
        int j= nums.size()-1;
        int temp = 0;
        int k =0;
        int l = nums.size();
        
        while ( i <= j) {
            
            if (nums[i] == val && nums[j] != val) {
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                i++;
                j--;
                k++;
            }
            else if (nums[i] != val) {
                i++;
            }
            else if (nums[j] == val) {
                j--;
                k++;
            }
        }
            
        int m = l - k;
        return m ;
        
    }
};
