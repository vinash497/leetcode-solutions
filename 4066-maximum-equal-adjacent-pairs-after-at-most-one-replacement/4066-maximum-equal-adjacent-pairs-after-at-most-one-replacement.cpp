class Solution {
public:
    int maxEqualAdjacentPairs(vector<int>& nums) {
        int count = 0;
        unordered_map<int, unordered_map<int, int>> mpp;
        
        for(int i = 0;i < nums.size() - 1;i++){
            if(nums[i] != nums[i + 1]){
                mpp[nums[i]][nums[i+ 1]]++;
                mpp[nums[i + 1]][nums[i]]++;
            }
            else count++; 
        }
        int maximum = 0;
        for(auto& outer: mpp){
            for(auto& inner: outer.second){
                maximum = max(maximum, inner.second);
            }
        }
        return count + maximum;
    }
};