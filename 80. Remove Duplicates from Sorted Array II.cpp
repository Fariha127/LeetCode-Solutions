class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int c = 0;
        int k = 0;
        int l = nums.size();
        int ul = nums.size() - 1;

        if (l <= 2) return l;
       
        for (int i = 1; i < ul+1; i++) {

            if (nums[i - 1] != nums[i]) {

                c = 0;
                k++;
            }
            if (nums[i - 1] == nums[i]) {
                
                c++;
                
                if (c >= 2) {
                    for (int j = i+1; j <= ul; j++) {
                        nums[j - 1] = nums[j];
                    }
                    ul--;
                    i--;
                }
                else {
                    k++;
                }
                
                
            }
        }
        k++;

        return k;
    }
};