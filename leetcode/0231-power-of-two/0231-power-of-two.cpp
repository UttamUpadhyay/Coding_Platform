class Solution {
public:
    bool isPowerOfTwo(int n) {
         if (n == 1) {
            return true;
        }
        if (n % 2 != 0 || n == 0 ) {
            return false;
        }
       
       int x =  isPowerOfTwo(n / 2);
       
        return x;
      
    }
};