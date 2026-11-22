class Solution {
public:
    int findNthDigit(int n) {
        long long digits = 1;   // digits per number in current block
        long long count = 9;    // count of numbers in current block
        long long start = 1;    // first number in current block

        // Find the block containing the nth digit
        while (n > digits * count) {
            n -= digits * count;
            digits++;
            count *= 10;
            start *= 10;
        }

        // Find the actual number containing the nth digit
        long long num = start + (n - 1) / digits;

        // Find the position of the digit within that number
        int index = (n - 1) % digits;

        string s = to_string(num);
        return s[index] - '0';
    }
};