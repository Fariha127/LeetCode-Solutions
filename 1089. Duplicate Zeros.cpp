class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int i = 1;
        int j = 0;
       for (i=1; i< arr.size(); i++) {
           if (arr[i-1]==0) {
               for (j=arr.size()-1; j>i; j--) {
                 arr[j]=arr[j-1];
               }
               arr[i]=0;
               i++;
           }
       }
    }
};