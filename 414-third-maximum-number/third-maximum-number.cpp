class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long firstMax = LONG_MIN;
        long secondMax = LONG_MIN;
        long thirdMax = LONG_MIN;
       for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > firstMax) {
                firstMax = nums[i];
            }
        }
       for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > secondMax && nums[i] != firstMax) {
                secondMax = nums[i];
            }
        }
      for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > thirdMax && nums[i] != secondMax && nums[i]!=firstMax) {
                thirdMax = nums[i];
            }
        }
        if (thirdMax == LONG_MIN) {
            return firstMax;   // must return first max
        }
        return thirdMax;
    }
};