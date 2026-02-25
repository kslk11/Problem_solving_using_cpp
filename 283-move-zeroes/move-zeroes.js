/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var moveZeroes = function(nums) {
  let arr = [];
  let countZero = 0;
  for(let i=0;i<nums.length;i++){
    if(nums[i]===0){
        countZero++;
    }else{
        arr.push(nums[i])
    }
  }
  for(let i=countZero;i>0;i--){
    arr.push(0);
  }
  for(let i=0;i<nums.length;i++){
    nums[i]=arr[i];
  }
};