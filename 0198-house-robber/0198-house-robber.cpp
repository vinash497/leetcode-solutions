class Solution {
public:
     int fun(vector<int>& nums,int i , vector<int>& dp){
        if(i >= nums.size()) return 0;
        if(dp[i] != -1) return dp[i];

        int n1 = nums[i] + fun(nums, i + 2, dp);
        int n2 = fun(nums, i + 1, dp);
        return dp[i] = max(n1 , n2);
     }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);
        int ans = fun(nums, 0, dp);

        return ans;
    }
};