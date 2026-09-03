class Solution {
public:
    int hammingWeight(int n) {
        vector<int>bin;
        while (n != 0) {
            bin.push_back(n % 2);
            n = n / 2;
        }
        int ans = 0;
        for (int i = 0; i < bin.size(); i++) {
            if(bin[i] == 1){
                ans++;
            }
      }
      return ans;
    }
};