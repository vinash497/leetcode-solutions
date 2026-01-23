 class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>set(nums.begin(),nums.end());;
        nums.clear();
        for(auto i=1;i<=n;i++)if(set.count(i)==0)nums.push_back(i);
        return nums;
    }
};
