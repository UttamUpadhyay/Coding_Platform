class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // Start from the rightmost digit and move backwards
        for (int i = digits.size() - 1; i >= 0; i--) {
            // If the digit is less than 9, increment it and we are done
            if (digits[i] < 9) {
                digits[i]++;
                return digits; // Return early as there is no more carry
            }
            // If the digit is 9, it becomes 0 due to the carry
            digits[i] = 0;
        }
        
        // If the loop completely finishes, it means all digits were 9 (e.g., 999 -> 000)
        // We need to insert a 1 at the very beginning (e.g., 1000)
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
