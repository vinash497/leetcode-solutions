class Solution {
    public int triangleNumber(int[] nums) {
        int ans = 0;
                Arrays.sort(nums); //ascending
                        for (int i=0; i<nums.length-2; i++){
                                    for (int j=i+1; j<nums.length-1; j++){
                                                    int k = j+1;
                                                                    while (k<nums.length && nums[i]+nums[j]>nums[k]){
                                                                                        ans++;
                                                                                                            k++;
                                                                                                                            }
                                                                                                                                        }
                                                                                                                                                }
                                                                                                                                                        return ans;
    }
}
