class Solution {
public:
    int maxProduct(int n) {
        vector<int> result;
        while(n > 0){
            int digit = n % 10;
            result.push_back(digit);
            
            n /= 10;
        }
        sort(result.begin(),result.end());
        int res = result[result.size() - 1] * result[result.size() - 2];
        return res;
    }
};
