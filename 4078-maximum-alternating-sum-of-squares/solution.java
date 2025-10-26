class Solution {
    public long maxAlternatingSum(int[] nums) {
        int n = nums.length;
        long squares[] = new long[n];
        for(int i=0;i<n;i++){
            long val = nums[i];
            squares[i] = val*val;
        }
        Arrays.sort(squares);
        long score =0;
        int numPositive = (n+1)/2;
        for(int i=0;i<numPositive;i++){
            score+=squares[n-1-i];
        }
        for(int i=0;i<n-numPositive;i++){
         score-=squares[i];
        }
        return score;
    }
}
