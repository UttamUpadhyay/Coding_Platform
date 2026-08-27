class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int, int>m;
        int ans;
        for (int i = 0; i < nums.size(); i++) 
        {
            m[nums[i]]++;

        }
        for (auto i : m) {
            if (i.second > 1) {
                ans = i.first;
            }
        }

       return ans;
    }
};