class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int ans = INT_MAX;
        for(int i = 0;i < nums.size();i += 2){
            int a = nums[i];
            int b = nums[i + 1];

            int p = 1;
            while(p <= b){
                p *= 10;
            }
            int merged = a * p + b;
            ans = min(ans, merged);
        }
        return ans;
    }
};
