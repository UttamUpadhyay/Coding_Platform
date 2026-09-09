class Solution {
public:
    int climb(int n, vector<int> &dat) {
         if (n < 0){
        return 0;
     }
     if (n == 0) {
        return 1;
     }
     if (dat[n] == 0){
        dat[n] = climb(n - 1, dat) + climb(n - 2, dat);
     }
     return dat[n];
    }
    int climbStairs(int n) {
     vector<int>data(n + 1, 0);
     return climb(n , data);
    

    }
};