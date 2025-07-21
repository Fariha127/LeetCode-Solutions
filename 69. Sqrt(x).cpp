class Solution {
public:
    int mySqrt(int x) {
       int l = 0;
       int r = x;
       long long int m = 0;
       int k = 0;
       while ( l <= r ) {

        m = (l + r) / 2;

        if ( m*m <= x) {
            k = m;
            l = m + 1;
        }
        else if ( m*m > x) {
            r = m-1;
        }
        
       }
       return k;
    }
};