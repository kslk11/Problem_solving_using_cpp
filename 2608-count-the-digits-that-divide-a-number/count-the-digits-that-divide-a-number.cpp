class Solution {
public:
    int countDigits(int num) {
        if (num <= 0)
            return 0;
        int count = 0, temp = num;
        while (num > 0) {
            int bit = num % 10;
            if (temp % bit == 0 && bit != 0) {
                count++;
            }
            num /= 10;
        }
        return count;
    }
};