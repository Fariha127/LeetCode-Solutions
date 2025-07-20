class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
       sort(arr.begin(), arr.end()); 
        int i=0, j=0;
        
        for(int num:arr) {
            for(j=0; j<arr.size(); j++) {
                
           if(arr[i]==2*arr[j] && arr[i]!=0 && arr[j]!=0) {
               return true;
           }
        }
        i++;
      }
     return false;
    }
};