// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
       int l = 0;
       int r = n-1;
       long long int m = 0;

       while ( l <= r ) {
        m = l + (r - l) / 2;
        if (isBadVersion(m)) {
         r = m - 1;
        }
        else {
            
            l = m + 1;
        }
       }
       return l;
    }
};