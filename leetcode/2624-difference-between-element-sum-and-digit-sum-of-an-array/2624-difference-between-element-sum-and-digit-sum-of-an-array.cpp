class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum1 = 0;
        int sum2 = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            sum1 += nums[i];
            while (nums[i] != 0) {
                int rem = nums[i] % 10;
                sum2 += rem;
                nums[i] /= 10;
            }
        }
       
        
    
        int ans = abs(sum2 - sum1);
        return ans;
    }
};