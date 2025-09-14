class Solution {
    public int numOfUnplacedFruits(int[] fruits, int[] baskets) {
        int i = 0,j = 0,cnt = 0;
            for(i=0;i<fruits.length;i++){
            for(j=0;j<baskets.length;j++){
                if(fruits[i]<=baskets[j]){
                    cnt++;
                    baskets[j] = 0;
                    break;
                }
            }
        }
        return fruits.length - cnt;  
    }
}
