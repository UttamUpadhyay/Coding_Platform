class Solution {
  public:
    int maxDays(vector<int> &arr) {
        int max = INT_MIN;
        for (int i = 0; i < arr.size(); i++) {
            if (max < arr[i]){
                max = arr[i];
            }
        }
        return max;
        
    }
};