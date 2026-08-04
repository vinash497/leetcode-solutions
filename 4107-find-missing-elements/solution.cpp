class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_set<int> mpp;
        for(auto num : nums){
            mpp.insert(num);
        }
        vector<int> list;
        
        int maxi = *max_element(nums.begin(),nums.end());
        int mini = *min_element(nums.begin(),nums.end());

        for(int i = mini;i < maxi;i++){
            if(mpp.find(i) == mpp.end()) list.push_back(i);
        }
        return list;
    }
};
