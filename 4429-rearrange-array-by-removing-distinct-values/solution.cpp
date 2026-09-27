class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans;
        map<int,int> mpp;
        for(auto x : nums) mpp[x]++;
        
        while(ans.size() < nums.size()){
            for(auto& p : mpp){
                if(p.second > 0) ans.push_back(p.first);
                p.second--;
            }
        }
        return ans;
    }
};
