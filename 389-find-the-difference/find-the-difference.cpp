class Solution {
public:
    char findTheDifference(string s, string t) {
        char diff = 0;
        for (char ch : s) {
            diff ^= ch;
        }
        for (char ch : t) {
            diff ^= ch;
        }
        return diff;
    }
};