class Solution {
public:
    int findGCD(vector<int>& nums) {
        int small = INT_MAX;
        int largest = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            small = min(nums[i], small);
            largest = max(nums[i], largest);
        }
        int ans = gcd(small, largest);
        return ans;
    }
};