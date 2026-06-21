class Solution {
public:
    int firstDigit(long long x){
        while(x >= 10){
            x /= 10;
        }
        return x;
    }
    int countValidSubarrays(vector<int>& nums, int x) {
        int n = nums.size();
        int ans = 0;

        for(int i =0;i < n;i++){
        long long sum = 0;
        for(int j = i;j < n;j++){
            sum += nums[j];

            int first = firstDigit(sum);
            int last = sum % 10;

            if(first == x && last == x) ans++;
        }
        }
        return ans;
    }
};