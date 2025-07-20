class Solution {
public:
    bool checkDivisibility(int n) {
        int p = n;
        int r = 0;
        int sum = 0;
        int product = 1;
      while ( p > 0) {
          r = p%10;
          p = p / 10;
          sum = sum + r;
          product = product*r;
      }
        int total = sum + product;
        if (n%total== 0) {
            return true;
        }
        else {
            return false;
        }
    }
};