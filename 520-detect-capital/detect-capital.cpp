class Solution {
public:
    bool detectCapitalUse(string word) {
        return isAllUpper(word) || isAllLower(word) || isFirstUpperRestLower(word);
    }
    
private:
    bool isAllUpper(const string& str) {
        for (char c : str) {
            if (!(c >= 'A' && c <= 'Z'))
                return false;
        }
        return true;
    }
    
    bool isAllLower(const string& str) {
        for (char c : str) {
            if (!(c >= 'a' && c <= 'z'))
                return false;
        }
        return true;
    }
    
    bool isFirstUpperRestLower(const string& str) {
        if (!(str[0] >= 'A' && str[0] <= 'Z'))
            return false;
        for (int i = 1; i < str.size(); i++) {
            if (!(str[i] >= 'a' && str[i] <= 'z'))
                return false;
        }
        return true;
    }
};
