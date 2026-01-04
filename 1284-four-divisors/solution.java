class Solution {
    public int sumFourDivisors(int[] nums) {
        int total = 0;
        for(int x : nums){
            int cnt = 0;
            int sum = 0;
            for(int d = 1;d*d <= x;d++){
                if(x%d==0){
                    int j = x/d;
                    cnt++;
                    sum += d;
                    if(d != j){
                        cnt++;
                        sum += j;
                    }
                    if(cnt > 4) break;
                }
            }
            if(cnt == 4) total+=sum;
        }
        return total;
    }
}
