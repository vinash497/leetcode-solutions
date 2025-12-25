class Solution {
    public long maximumHappinessSum(int[] happiness, int k) {
        Arrays.sort(happiness);
        long score = 0;
        int n = happiness.length;

        for(int i = 0;i < k;i++){
            long curVal = happiness[n - 1 - i] - i;
            if(curVal > 0) score+=curVal;
            else break;
        }
        return score;
    }
}
