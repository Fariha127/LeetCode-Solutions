class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int temp = 0;
        int m = 0;
        vector<int> h = heights;
        
        for (int i = 0; i < heights.size(); i++) {
          for (int j = 1; j < heights.size(); j++) {
            if (heights[j-1] > heights[j]) {
                temp = heights[j-1];
                heights[j-1] = heights[j];
                heights[j] = temp;
            }
          }
        }
        
        for (int i = 0; i < heights.size(); i++) {
            if (h[i]!=heights[i]) {
                m++;
            }
        }
        return m;
    }
};