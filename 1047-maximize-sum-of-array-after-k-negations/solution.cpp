class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        vector<int> copy;
        for (auto it : nums) {
            copy.push_back(it);
        }
        sort(copy.begin(), copy.end());
        int ans = 0;
        int min_ele = INT_MAX;

        for (int i = 0; i < copy.size(); i++) {
            if (k == 0) { // no flips now, just add ans;
                ans += copy[i];
            } else if (copy[i] < 0) { // here flip! this is greedy
                ans += -copy[i];
                min_ele = min(min_ele, -copy[i]);
                k--;
            } else if (copy[i] == 0) { // assume all flips used here
                k = 0;
            } else { // keep calc min ele
                ans += copy[i];
                min_ele = min(min_ele, copy[i]);
            }
        }

        if (k % 2 != 0) {
            ans = ans - (2 * min_ele); // subtract at end if needed
        }

        return ans;
    }
};
