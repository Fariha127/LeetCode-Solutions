class Solution {
public:
    int findNumbers(vector<int>& nums) {
    int c = 0;
    int maxx = 0;
     for(int num:nums){
         while(num){
             num = num/10;
             c++;
             }
             if(c%2 == 0){
                 maxx++;
             }
         c = 0;
         
     }
        return maxx;
    }
};