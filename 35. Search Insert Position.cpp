// class Solution {
// public:
//     int searchInsert(vector<int>& nums, int target) {
//         int i = 0;
//         for( i= 0; i<nums.size(); i++) {
//             if(target <= nums[i]){
//                 break;
//             }
//         }
//       return i;  
//     }
// };

// using binary search :
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
      int l = 0;
      int r = nums.size() - 1;
      int m = 0;
    

      while (l <= r) {
        m = ( l + r ) / 2;
        if ( nums[m] < target) {
      
            l = m + 1;
        }
        else if (nums[m] >= target) {
           
            r = m - 1;
        }
        
      }
      return l;
    }
