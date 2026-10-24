class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>a(2);
        int i = 0;
        int r = nums.size() - 1;
        while(i < r){
            int sum = nums[i] + nums[r];
            if (sum == target) {
            a[0] = i + 1;
            a[1] = r + 1;
            break;
        }
        else if (sum > target) {
        r--;
        }
        else if (sum < target) {
         i++;
        }
        }
        return a;
    }
};