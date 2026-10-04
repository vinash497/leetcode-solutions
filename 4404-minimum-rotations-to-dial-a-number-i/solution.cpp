class Solution {
public:
    int minRotations(string s) {
        int current = 0;
        int ans = 0;
        for(char ch : s){
            int target = ch - '0';
            int direct = abs(current - target);
            int circular = 10 - direct;
            ans += min(direct, circular);

            current = target;
        }
        return ans;
    }
};
