class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       unordered_map<int ,int> freq;
       vector<int>res;
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
            if(freq[nums[i]]==2){
                res.push_back(nums[i]);
            }
        }
        return res;
    }
};