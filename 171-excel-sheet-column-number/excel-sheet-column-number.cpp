class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
        for (int ch : columnTitle) {
            result *= 26;
            result += ch - 'A' + 1;
        }
        return result;
    }
};