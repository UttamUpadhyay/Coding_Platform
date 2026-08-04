class Solution {
public:
    int divide(int dividend, int divisor) {
       if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }

        // Determine the sign of the quotient
        bool isPositive = (dividend > 0) == (divisor > 0);

        // Convert to 64-bit absolute values to avoid overflow during shifting
        long long absDividend = abs((long long)dividend);
        long long absDivisor = abs((long long)divisor);

        long long quotient = 0;

        // Perform bitwise division
        while (absDividend >= absDivisor) {
            long long tempDivisor = absDivisor;
            long long multiple = 1;

            // Exponentially double the divisor until it exceeds the remaining dividend
            while (absDividend >= (tempDivisor << 1)) {
                tempDivisor <<= 1;
                multiple <<= 1;
            }

            // Subtract the largest found chunk from the dividend
            absDividend -= tempDivisor;
            // Accumulate the quotient
            quotient += multiple;
        }

        // Apply the correct sign and return the final 32-bit signed integer
        return isPositive ? quotient : -quotient;
    }
    
};