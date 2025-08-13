class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int altitude = 0,maxalt=0;
        for(int g:gain){
            altitude+=g;
            maxalt=max(maxalt,altitude);
        }
        return maxalt;
    }
};