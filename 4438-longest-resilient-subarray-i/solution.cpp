class Solution {
public:
    int resilientSubarray(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 1;

        for(int i = 0;i < n;i++){
            int remainder = nums[i] % k;

            for(int j = i;j < n;j++){
                if(nums[j] % k != remainder)
                    break;
                
                int len = j - i + 1;
                if(((len - 1) * remainder) % k == 0) ans = max(ans,len);
            }
        }
        return ans;
    }
};
