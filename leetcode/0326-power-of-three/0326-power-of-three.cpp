class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0|| n % 2 == 0){
            return false;
        }
        if (n == 1) {
            return true;
        }
        if (n % 3 == 0){
        int x = isPowerOfThree(n / 3);
        return x;
        }
        return false;
    }
};