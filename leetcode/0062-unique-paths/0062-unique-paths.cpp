class Solution {
public:
int Helper(int i, int j, vector<vector<int>>&data) {
	  if (i == 0 && j == 0) {
	    return 1;
	  }
	  if (i < 0 || j < 0){
	    return 0;
	  }
	  if (data[i][j] == 0) {
	  data[i][j] =  Helper(i - 1, j, data) + Helper(i, j - 1, data);
	  }
	  return data[i][j];
	  }
	  
    int uniquePaths(int m, int n) {
        vector<vector<int>>dat(m, vector<int>(n));
  return Helper(m - 1, n - 1, dat);

    }
};