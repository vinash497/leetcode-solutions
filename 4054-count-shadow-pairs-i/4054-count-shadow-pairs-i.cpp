class Solution {
public:
    long long shadowPairs(vector<int>& nums) {
        int n = nums.size();
        vector<int> nextSmaller(n, n);

        stack<int> st;
        for(int i = 0;i < n;i++){
            while(!st.empty() && nums[i] < nums[st.top()]){
                nextSmaller[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        unordered_map<int, vector<int>> positions;

        for(int i = 0;i < n;i++){
            positions[nums[i]].push_back(i);
        }
        long long ans = 0;
        for(int i = 0;i < n;i++){
            int right = nextSmaller[i] - 1;

            if(right <= i){
                continue;
            }
            long long total = right - i;

            vector<int> &pos = positions[nums[i]];

            auto first = upper_bound(pos.begin(),pos.end(),i);
            auto last = upper_bound(pos.begin(),pos.end(),right);

            long long equalCount = last - first;

            ans += total - equalCount;
        }
        return ans;
    }
};