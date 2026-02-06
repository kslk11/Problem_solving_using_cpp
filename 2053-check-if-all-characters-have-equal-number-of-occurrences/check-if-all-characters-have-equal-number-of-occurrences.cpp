class Solution {
public:
    bool areOccurrencesEqual(string s) {
       map<char,int>freq;
       for(auto x:s){
        freq[x]++;
       }
       int store = freq[s[0]];
       for(auto x:freq){
        if(x.second!=store){
            return false;
        }
       }
       return true;
    }
};