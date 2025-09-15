class Solution {
    public int jump(int[] nums) {
        int jump = 0;
        int currentJump=0;
        int farthestJump = 0;
        for(int i=0;i<nums.length-1;i++){
        farthestJump = Math.max(farthestJump,i+nums[i]);
        if(i==currentJump){
            jump++;
            currentJump = farthestJump;
        }
        if(currentJump>nums.length)   return jump;
        }
        return jump;
    }
}
