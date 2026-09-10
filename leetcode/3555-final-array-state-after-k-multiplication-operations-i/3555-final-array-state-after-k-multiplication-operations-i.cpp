class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
         while (k--) {
            int minIndex = -1;
            int minVal = INT_MAX;
            for (int i = 0; i < nums.size(); ++i) {
                if (nums[i] < minVal) {
                    minVal = nums[i];
                    minIndex = i;
                }
            }
            nums[minIndex] = minVal * multiplier;
        }
        
        return nums;
    }
};