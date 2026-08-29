class Solution {
public:
    int maxValidSplits(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        for(int remove = -1;remove < n;remove++){
            vector<int> arr;
            for(int i = 0;i < n;i++){
                if(i != remove) arr.push_back(nums[i]);
            }
            int m = arr.size();
            if(m < 2) continue;

           vector<int> pref(m);
            pref[0] = arr[0];
            for(int i = 1;i < m;i++){
                pref[i] = gcd(pref[i - 1],arr[i]);
            }
            vector<int> suff(m);
            suff[m - 1] = arr[m - 1];
            for(int i = m - 2;i >= 0;i--){
                suff[i] = gcd(suff[i + 1],arr[i]);
            }
            int score = 0;
            for(int i = 0;i < m - 1;i++){
                int leftGcd = pref[i];
                int rightGcd = suff[i + 1];

                if(leftGcd == rightGcd) score++;
            }
            ans = max(ans,score);
        }
        return ans;
    }
};
