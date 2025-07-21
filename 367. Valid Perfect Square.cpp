class Solution {
public:
    bool isPerfectSquare(int num) {
        
       int l = 1;
       int r = num;
       long long int m = 0;
       long long int s = 0;

       while ( l <= r ) {
        m = l + (r - l) / 2;
        s = m * m;
        if ( s > num) {
         r = m - 1;
        }
        else if ( s < num){
            
            l = m + 1;
        }
        else {
            return true;
        }
       }
       return false;
    }
};