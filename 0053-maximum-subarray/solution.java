class Solution {
    public int maxSubArray(int[] nums) {
      int cmax = nums[0], gmax = nums[0];
        for (int i = 1; i < nums.length; i++) {
            cmax = nums[i] > cmax + nums[i] ? nums[i] : cmax + nums[i];
            gmax = gmax > cmax ? gmax : cmax;
        }
        return gmax;  
    }
}
