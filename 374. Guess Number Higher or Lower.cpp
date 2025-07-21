/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int l = 1;
        int r = n;
        long long m = 0;
        

        while ( l <= r) {
            
            m = l + (r - l) / 2;
            int g = guess(m);
            if (g == -1) {
                r = m - 1;
            }
            else if (g == 1) {
                l = m + 1;
            }
            else if (g ==  0){
                 break;
            }
        }
        return m;
    }
};