class Solution {
public:
    double myPow(double x, int n) {
        // if (n == 0) {
        //     return 1;
        // }
        // else if (n > 0) {
        // double y =  x * myPow(x, n - 1);
        //  return y;
        // }
        return pow(x, n);
       
    }
};