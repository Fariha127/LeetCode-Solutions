class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     int k=0;
     int i=1;
        nums[k] = nums[i-1];
        k++;
      for (i=1; i<nums.size(); i++)       {
       if(nums[i]!=nums[i-1]) {
        nums[k] = nums[i];
           k++;
      }
         
     }
       
        return k;
    }
};