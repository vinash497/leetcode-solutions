class Solution {
public:
    int spf(int x){
        for(int i = 2;i * i <= x;i++){
            if(x % i == 0) return i;
        }
        return x;
    }
    long long minimumMaxValue(int n, int index, int value) {
        int p = spf(value);
        if(index > 0){
            int limit = (value % 2 == 0) ? value - 2 : value - p;
            if(2LL * index > limit) return -1;
        }
            int right = n - 1 - index;
            if(right == 0) return value;
            if(value == 1) return -1;
            long long ans = value;
            if(value % 2 != 0)  ans += p + 2LL * (right - 1);
            else ans += 2LL * right;
            return ans;
    }
};
