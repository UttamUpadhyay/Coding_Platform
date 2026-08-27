class Solution {
public:
    int missingNumber(vector<int>& nums) {
       vector<int>m(10001, 0);
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
        }
        for (int i = 0; i < m.size(); i++) {
            if (m[i] == 0){
                return i;
            }
        }
        
        return 0;
    }
};