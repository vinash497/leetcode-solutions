class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,vector<int>> mpp;
         for(int i = 0;i < nums.size();i++)  mpp[nums[i]].push_back(i);

        int count = 0;

        for(auto it : mpp){
          if(it.second.size() == 3){
            int i = mpp[it.first][0];
            int j = mpp[it.first][1];
            int k = mpp[it.first][2];

            if((j - i) == (k - j)) count++;
         }
        }
        return count;
    }
};