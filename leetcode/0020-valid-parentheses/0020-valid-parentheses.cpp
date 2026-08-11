class Solution {
public:
    bool isValid(string s) {
        stack<char> S; 
        
        for (int i = 0; i < s.size(); i++) {
            char x = s[i];
            
            if (x == '[' || x == '(' || x == '{') {
                S.push(x);
            } 
           
            else {
               
                if (S.empty()) {
                    return false;
                }
                
                char y = S.top();
                if ((x == ')' && y == '(') || 
                    (x == ']' && y == '[') || 
                    (x == '}' && y == '{')) {
                    S.pop();
                } 
               
                else {
                    return false;
                }
            }
        }
        
        // If the stack is empty at the end, all brackets were matched correctly.
        return S.empty(); 
    }
};