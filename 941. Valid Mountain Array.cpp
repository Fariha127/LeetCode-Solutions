class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int m = 0;
        int n = 0;

        int l = arr.size();

        int i = 1;

        if (l < 3) {
            return false;
        }

        while (i < l && arr[i - 1] < arr[i]) {
            m++;
            i++;
        }

    

        while (i < l && arr[i - 1] > arr[i]) {
            n++;
            i++;
        }

        if (m == 0 || n == 0) {
            return false;
        }

        if (m + n + 1 == l) {
            return true;
        } else {
            return false;
        }
    }
};