class Solution {
public:
    int minDays(int n) {
        vector<int> mpp(n + 1, INT_MAX);

        mpp[0] = -1;
        for(int score = 1; score <= n;score++){
            for(int k = 1;k*(k + 1)/ 2 <= score;k++){
                int points = k * (k + 1)/ 2;

                if(mpp[score - points] != INT_MAX){
                    mpp[score] = min(mpp[score], mpp[score - points]+ k + 1);
                }
            }
        }
        return mpp[n];
    }
};