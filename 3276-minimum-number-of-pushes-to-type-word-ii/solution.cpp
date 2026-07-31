class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int> mpp;
        for(int i = 0;i < word.size();i++){
            mpp[word[i]]++;
        }
        vector<int> values;

        for (auto it : mpp) {
            values.push_back(it.second);
        }
        sort(values.begin(), values.end(), greater<int>());

        int ans = 0;
       for(int i = 0;i < values.size();i++){
            ans += values[i] * ((i / 8) + 1);
       }
        return ans;
    }
};
