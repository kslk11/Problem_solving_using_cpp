class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> arr(n);
        for (int i = 0; i < nums.size(); i++) {
            arr[(k + i) % n] = nums[i];
        }
        nums = arr;
    }
};