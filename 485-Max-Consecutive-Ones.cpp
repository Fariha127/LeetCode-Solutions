class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
   int c = 0;
   int maxx = 0;

   for (int num : nums) {
       if (num == 1){
           c++;
           maxx = max(maxx, c);
       }
       else{
          c = 0;
       }
   }
   

    return maxx;
}
};