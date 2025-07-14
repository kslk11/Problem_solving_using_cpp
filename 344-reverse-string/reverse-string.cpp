class Solution {
public:
    void reverseString(vector<char>& s) {
        int st = 0;
        int e = s.size() - 1;
        while (st < e) {
        char temp = s[st];
        s[st] = s[e];
        s[e] = temp;
        st++;
        e--;
    }
    
    }
};