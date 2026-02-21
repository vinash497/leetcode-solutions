class Solution {
public:
    bool check(int n){
        if(n == 2 || n == 3 || n == 5 || n == 7 || n == 11 || n == 13 || n == 17 || n == 19){
            return true;
        }
        return false;
    }
    int countPrimeSetBits(int left, int right) {
        int ans = 0;
        for(int i = left; i <= right; i++){
            int num = i, cnt = 0;
            while(num){
                if(num & 1)cnt++;
                num >>= 1; // right shift
            }
            if(check(cnt))ans++;
        }
        return ans;
    }
};
