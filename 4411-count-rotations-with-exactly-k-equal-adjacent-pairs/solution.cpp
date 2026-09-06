class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size();
        int equalPairs = 0;

        for(int i = 0;i < n;i++){
            if(s[i] == s[(i + 1) % n]) equalPairs++;
        }

        if(k == equalPairs){
            return n - equalPairs;
        }
        if(k == equalPairs - 1) return equalPairs;

        return 0;
    }
};
