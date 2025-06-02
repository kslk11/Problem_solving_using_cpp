class Solution {
public:
    int hammingWeight(int n) {
        string str = "";
        while (n > 0) {
            int bit = n % 2;
            str = to_string(bit) + str;
            n /= 2;
        }
        int count = 0;
        for (auto ch : str) {
            if (ch == '1') {
                count++;
            }
        }
        return count;
    }
};