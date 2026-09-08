class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        int j = left;
        vector<int> arr;
        while (j <= right) {
            bool isValid = true;
            int temp = j;
            while (temp > 0) {
                int digit = temp % 10;
                if (digit == 0 || j % digit != 0) {
                    isValid = false;
                    break; // Stop checking this number
                }
                temp /= 10;
            }
            if (isValid) {
                arr.push_back(j);
            }
            j++;
        }
        return arr;
    }
};