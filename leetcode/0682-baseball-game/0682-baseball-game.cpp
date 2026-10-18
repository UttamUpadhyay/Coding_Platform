class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> S;
        
        for (int i = 0; i < operations.size(); i++) {
            string symbol = operations[i];
            if (symbol == "+") {
                int a = S.top();
                S.pop();
                int b = S.top();
                S.push(a);       
                S.push(a + b);
            } 
            else if (symbol == "D") {
                S.push(2 * S.top());
            } 
            else if (symbol == "C") {
                S.pop();
            } 
            else {
                S.push(stoi(symbol));
            }
        }
        int sum = 0;
        while (!S.empty()) {
            sum += S.top();
            S.pop();
        }
        
        return sum;
    }
};