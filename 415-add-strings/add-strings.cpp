class Solution {
public:
    string addStrings(string num1, string num2) {
        string res = "";
        int carry = 0;
        int i = num1.length() - 1;
        int j = num2.length() - 1;
        while (i >= 0 || j >= 0 || carry) {
            int digit1 = (i >= 0) ? num1[i--] - '0' : 0;
            int digit2 = (j >= 0) ? num2[j--] - '0' : 0;
            int sum = digit1 + digit2 + carry;
            res += (sum % 10) + '0';
            carry = sum / 10;
        }
            reverse(res.begin(), res.end());
            return res;
    }
};