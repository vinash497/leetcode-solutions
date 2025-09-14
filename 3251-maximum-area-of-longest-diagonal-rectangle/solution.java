class Solution {
    public int areaOfMaxDiagonal(int[][] dimensions) {
        double maximum = 1.0;
        int result = 0;
        for(int[] rectangle:dimensions){
            int l=rectangle[0],b = rectangle[1];
            double result1 = Math.sqrt((double)l*l+(double)b*b);
            if(result1 > maximum){
                maximum = result1;
                result = l*b;
            }
            else if(result1 == maximum){
                result = Math.max(l*b,result);
            }
        }
        return result;
    }
}
