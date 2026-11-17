class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            ans.push_back(nums[i] * nums[i]);
        }
        for (int i = 0; i < ans.size(); i++) {
        int min_idx = i;
        for (int j = i + 1; j < ans.size(); j++) {
            if (ans[j] < ans[min_idx]) {
                min_idx = j; 
            }
        }
        swap(ans[i], ans[min_idx]);
    }


        return ans;
    }
};