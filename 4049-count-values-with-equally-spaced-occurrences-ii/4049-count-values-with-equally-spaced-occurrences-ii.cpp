class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,vector<int>> mpp;
        for(int i = 0;i < nums.size();i++){
            mpp[nums[i]].push_back(i);
        }
            int count = 0;

            for(auto it : mpp){
                if(it.second.size() >= 3){
                   int diff = it.second[1] - it.second[0];
                    bool valid = true;

                    for(int k = 2;k < it.second.size();k++){
                        if(it.second[k] - it.second[k - 1] != diff){
                            valid = false;
                            break;
                        }
                    }
                    if(valid) count++;
                }
            }
        return count;
    }
};