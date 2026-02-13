class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       unordered_map<int ,int> freq;
       vector<int>res;
        for (int i = 0; i < nums.size(); i++) {
           int ch =nums[i];
           if(freq[ch]){
            freq[ch]++;
           }else{
            freq[ch]=1;
           }
            if(freq[ch]==2){
                res.push_back(ch);
            }
        }
        return res;
    }
};