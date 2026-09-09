class Solution {
public:
    int minMoves(int target, int d) {    // d = maxDoubles
        if (target == 1){
            return 0;
        }
        if (d > 0) {
            if (target % 2 == 0){
                return 1 + minMoves(target / 2, d - 1);
            }
            else {
                return 1 + minMoves(target - 1, d);
            }
        }
        return target - 1;

       
    }
};