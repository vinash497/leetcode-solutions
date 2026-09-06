class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int x : nums){
            mpp[x]++;
        }
        int maxi = 0, ans;
        for(auto it : mpp){
           if(it.second > maxi){
               maxi = it.second;
               ans = it.first;
           }
        }
        return ans;
    }
};