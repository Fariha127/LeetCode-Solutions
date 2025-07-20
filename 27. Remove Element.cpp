class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0;
        int j=0;
       for (int num:nums) {
           
           if(num != val){
               nums[j]=nums[i];
               j++;
           }
           i++;

       }

        return j ;
        
    }
};