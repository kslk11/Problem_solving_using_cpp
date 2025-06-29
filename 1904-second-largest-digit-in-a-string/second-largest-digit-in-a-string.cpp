class Solution {
public:
    int secondHighest(string s) {
        int max = INT_MIN, secondMax = -1;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= '0' && s[i] <= '9') {
                int num = s[i] - '0';
                if (num > max) {
                    max = num;
                }
            }
        }
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= '0' && s[i] <= '9') {
                int num = s[i] - '0';
                if (num > secondMax && num != max) {
                    secondMax = num;
                }
            }
        }
        return secondMax;
    }
};