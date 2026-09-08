class Solution {
public:
    int countCommas(int n) {
        if(n < 1000) return 0;

        int ans = 0;
        //single comma from 1000 to 99999
        if(n >= 1000 && n <= 999999) ans += (n - 1000) + 1;
        else if(n >= 1000000 && n <= 999999999) ans += 2 * min(n,999999999) - 1000000 + 1;

        return ans;
    }
};