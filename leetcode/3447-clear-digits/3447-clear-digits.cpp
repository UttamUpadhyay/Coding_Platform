class Solution {
public:
    string clearDigits(string s) {
      stack<char>S1;
    for (int i = 0; i < s.size(); i++) {
        char c = s[i];
        if (c >= 'a' && c <= 'z' )
        S1.push(c);
        else if (c >= '0' && c <= '9' ){
            if (!S1.empty()){
                S1.pop();
            }
        }
    }
    string ans;
    while (!S1.empty()) {
        char x = S1.top();
        S1.pop();
        ans = ans+x;
    }
    reverse(ans.begin(), ans.end());
    return ans;

    }
};