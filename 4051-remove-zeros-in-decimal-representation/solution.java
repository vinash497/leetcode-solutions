class Solution {
    public long removeZeros(long n) {
        // if(n==1)  return 1;
        String s = String.valueOf(n);
        String result = s.replaceAll("0","");
        if(result.isEmpty()) return 0;
        long result1 = Long.parseLong(result);
        return result1;
    }
}
