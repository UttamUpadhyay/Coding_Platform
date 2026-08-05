class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n = operations.size();
        int X = 0;
      
    for (int i = 0; i < n; i++) {
        
        switch (operations[i][1]) {
            case '+': 
                X = X + 1;
                break;
            case '-':
                X = X - 1;
                break;
        } 
    }


    return X;
    }
};