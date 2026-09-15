class Solution {
public:
    int numberOfMatches(int n) {
      int total = 0;
      int teams = n;
      int match;
      while (teams != 1) {
        if (teams % 2 == 0) {
             match = teams / 2;
             teams -= match; 
            total += match;
        }
        else {
            match = (teams - 1) / 2;
             teams -= match;
            total += match; 
        }
      } 
      return total; 
    }
};