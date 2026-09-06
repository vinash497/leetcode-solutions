class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for(int x : nums) mpp[x]++;

        int maxi = nums.size()/ 3;
        vector<int> ans;
        for(auto it : mpp){
            if(it.second > maxi){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};