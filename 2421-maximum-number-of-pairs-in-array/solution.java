class Solution {
    public int[] numberOfPairs(int[] nums) {
        HashMap<Integer,Integer> map = new HashMap<>();
        for(int num : nums){
            map.put(num,map.getOrDefault(num,0)+1);
        }
        int pairs = 0;
        int rem = 0;
        for(int val : map.values()){
            pairs += val/2;
            rem += val%2;
        }
        return new int[]{pairs,rem};
    }
}
