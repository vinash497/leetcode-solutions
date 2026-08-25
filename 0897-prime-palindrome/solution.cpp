class Solution {
public:
    bool isPrime(int x) {
        if (x < 2) return false;
        for (int i = 2; i * i <= x; i++) {
            if (x % i == 0) return false;
        }
        return true;
    }

    int primePalindrome(int n) {
        // Handle special small range containing 11
        if (n >= 8 && n <= 11) return 11;

        // Generate odd-length palindromes using roots up to 100000
        for (int i = 1; i < 100000; i++) {
            string s = to_string(i);
            string r = s;
            r.pop_back(); // Remove last character to keep odd length
            reverse(r.begin(), r.end());
            
            int val = stoi(s + r);
            
            if (val >= n && isPrime(val)) {
                return val;
            }
        }
        return -1;
    }
};
