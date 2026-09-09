class Solution {
public:
    int numberOfSteps(int num) {
       if ( num  == 0) {
        return 0;
       }
       else if (num % 2 == 0) {
        int x = 1 + numberOfSteps(num / 2);
        return x;
       }
       else {
       int y = 1 + numberOfSteps(num - 1);
       return y;
       }
        
       
    }
};