class Solution {
public:
int cal(int a, int b, char op) {
            switch (op) {
                case '+':
                return a + b;
                case '-':
                return a - b;
                case '*':
                return a * b;
                case '/':
                return a / b;
               
            } return 0;
            };
    int evalRPN(vector<string>& tokens) {
        
            int i = 0;
            int n = tokens.size();
            stack<int>S;
            while (i < tokens.size()){
               string token = tokens[i];
                i++;
            if (token == "+" || token == "-" || token == "*" || token == "/") {
            int b = S.top(); 
            S.pop();
            int a = S.top(); 
            S.pop();
            
            int ans = cal(a, b, token[0]); 
            S.push(ans);
        } else {
            S.push(stoi(token)); 
        }  
            }
            return S.top();
        }
    
};