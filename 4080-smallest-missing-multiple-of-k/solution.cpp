class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> mpp;
        for(int num : nums){
            mpp.insert(num);
        }
        int cnt = k;
        while(mpp.contains(cnt)) cnt = cnt + k;

        return cnt;
    }
};
