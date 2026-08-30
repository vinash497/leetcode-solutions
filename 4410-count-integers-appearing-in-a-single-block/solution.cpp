class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        for(int i = 0;i < n;i++){
            if(i == 0 || nums[i] != nums[i - 1]) mpp[nums[i]]++;
        }
        int special_cnt = 0;
        for(const auto& [num, count] : mpp){
            if(count == 1) special_cnt++;
        }
        return special_cnt;
    }
};
