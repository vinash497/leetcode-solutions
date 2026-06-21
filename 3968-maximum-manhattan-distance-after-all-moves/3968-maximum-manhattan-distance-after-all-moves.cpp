class Solution {
public:
    int maxDistance(string moves) {
        int U = 0,L = 0,D = 0,R = 0,Q = 0;
        for(char ch : moves){
            if(ch == 'U') U++;
            else if(ch == 'L') L++;
            else if(ch == 'D') D++;
            else if(ch == 'R') R++;
            else Q++;
        }
        int op1 = R + U - L - D;
        int op2 =R + D - L - U;
        int op3 = L + U - R - D;
        int op4 = L + D - R - U;

        int ans = max({op1,op2,op3,op4}) + Q;

        return ans;
    }
};