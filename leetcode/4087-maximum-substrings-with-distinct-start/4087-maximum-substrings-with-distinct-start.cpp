class Solution {
public:
    int maxDistinct(string s) {
        unordered_set<char> distinctChars(s.begin(), s.end());
        return distinctChars.size();
    }
};