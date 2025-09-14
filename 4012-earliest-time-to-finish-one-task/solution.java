class Solution {
    public int earliestTime(int[][] tasks) {
        // if(tasks == null || tasks.length = 0){
        //     return -1;
        // }
        int minFinishTime = Integer.MAX_VALUE;
        for(int[] task : tasks){
            int startTime = task[0];
            int duration = task[1];
            //total duration for finish
            int finishTime = startTime + duration;
            minFinishTime = Math.min(minFinishTime,finishTime);
        }
        return minFinishTime; 
    }
}
