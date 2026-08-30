class Solution {
private:
    const long long MOD = 1e9 + 7;

    long long power(long long base,long long exp){
        long long res = 1;
        base %= MOD;
        while(exp > 0){
            if(exp % 2 == 1) res = (res * base) % MOD;
            base = (base * base) % MOD;
            exp /= 2;
        }
        return res;
    }
public:
    int sumDecoded(vector<long long>& nums) {
        long long sum = 0;

        for(long long val : nums){
            int width = val % 10;
            long long d = val / 10;
            string s = to_string(d);

            long long x = stoll(s.substr(0,width));
            long long y = stoll(s.substr(width));

            long long decoded_value = power(x,y);
            sum = (sum + decoded_value) % MOD;
        }
        return sum;
    }
};
