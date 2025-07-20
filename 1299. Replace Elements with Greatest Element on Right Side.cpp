class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int greatest = 0;
        int i = 0;
        for(i=0; i<arr.size()-1; i++){
            for(int j=i+1; j<arr.size(); j++) {
                if(arr[j]>=greatest){
                    greatest = arr[j];
                }
            }
            arr[i]= greatest;
            greatest = 0;
            
        }
        arr[i] = - 1;
        return arr;
    }
};