class Solution {
public:
    string reversePrefix(string st, int k) {
        stack<char> s;
        int i = 0;
        while (i < k) {
            char c = st[i];
            s.push(c);
            i++;
        }
        st = st.substr(k);
        string ans;
        while (!s.empty()) {
            ans = ans + s.top();
            s.pop();
        }
        ans = ans + st;
        return ans;
    }
};