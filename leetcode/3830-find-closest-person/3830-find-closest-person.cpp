class Solution {
public:
    int findClosest(int x, int y, int z) {
        int ans = abs(z - x);
        int ans2 = abs(z - y);
        if (ans < ans2) {
            return 1;
        }
        else if (ans > ans2) {
            return 2;
        }
        return 0;
    }
};