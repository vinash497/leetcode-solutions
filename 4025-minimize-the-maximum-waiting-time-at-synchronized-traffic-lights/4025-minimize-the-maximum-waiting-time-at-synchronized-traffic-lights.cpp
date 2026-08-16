class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
        int maxGreen = 0;
        for(int x : lights){
            maxGreen = max(maxGreen, x);
        }
        int answer = 0;
        for(int t : arrivalTime){
            int r = t % period;

                int wait;
                if(r < maxGreen) wait = 0;
                else wait = period - r;

            answer = max(answer, wait);
        }
        return answer;
    }
};