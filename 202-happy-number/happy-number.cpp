class Solution {
public:
    bool isHappy(int n) {
        while (n != 1 && n != 4) {
            int sum = 0;
            while (n > 0) {
                int bit = n % 10;
                sum += (bit * bit);
                n /= 10;
            }

            n = sum;
        }
        return n == 1;
    }
};