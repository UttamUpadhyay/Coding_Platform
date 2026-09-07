class Solution {
public:
    int pivotInteger(int n) {
        int ans = -1;
        int leftSum = 0;
        int rightSum = 0;

        for (int i=1; i<=n; i++) {
            rightSum += i;
        }

        for(int i=1; i<=n; i++) {
            leftSum += i;
            rightSum -= (i-1);

            if(leftSum == rightSum) {
                ans = i;
                break;
            }
        }
        return ans;
    }
};