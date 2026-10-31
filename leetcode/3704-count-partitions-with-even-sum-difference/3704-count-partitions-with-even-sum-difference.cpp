class Solution {
public:
    int countPartitions(vector<int>& nums) {
      int count = 0;
      int sum = 0;
      for (int i = 0; i < nums.size(); i++) {
        sum = sum + nums[i];
        count++;
      }  
      if (sum % 2 == 0) {
        count--;
      }
      else {
        count = 0;
      }
      return count;
    }
};