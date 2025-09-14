class Solution {
    public int[] maxKDistinct(int[] nums, int k) {
        Set<Integer> distinctNumberSet = new HashSet<>();
        for(int num : nums){
            distinctNumberSet.add(num);
        }
        Integer[] distinctNumberArray =  distinctNumberSet.toArray(new Integer[0]);
        //to convert into descending order we use collections.reverseorder() after the sorting the array
        
        Arrays.sort( distinctNumberArray,Collections.reverseOrder());
        int numberElementToPickUp = Math.min(k,distinctNumberArray.length);
        int[] result = new int[numberElementToPickUp];
        for(int i = 0;i<numberElementToPickUp;i++){
            result[i] = distinctNumberArray[i];
        }
        return result;
    }
}
