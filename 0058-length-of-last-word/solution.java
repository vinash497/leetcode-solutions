class Solution {
    public int lengthOfLastWord(String s) {
        int n = s.length(),len = 0;
        boolean untillength = false;
        for(int i=n-1;i>=0;i--){
            if(s.charAt(i)!=' '){
                len++;
                untillength=true;
            }
            else if(untillength) break;
        }
        return len;
    }
}
