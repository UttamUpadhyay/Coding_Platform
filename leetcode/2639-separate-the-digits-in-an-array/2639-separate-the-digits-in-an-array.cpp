class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> res;
        for (int i = 0; i < nums.size(); i++) {
            vector<int> tmp;
            int x = nums[i];
            while (x > 0) {
                tmp.push_back(x % 10);
                x /= 10;
            }
            for (int i = tmp.size() - 1; i >= 0; i--) {
                res.push_back(tmp[i]);
            }
        }
        return res;
    }
};