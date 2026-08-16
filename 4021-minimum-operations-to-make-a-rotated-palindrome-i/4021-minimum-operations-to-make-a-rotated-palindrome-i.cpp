class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        int answer = INT_MAX;

        for(int i = 0;i < n;i++){
            int operations = i;

            int left = 0,right = n - 1;
            while(left < right){
                int a = s[(left + i) % n];
                int b = s[(right + i) % n];

                int cost1 = (b - a + 26) % 26;
                int cost2 = (a - b + 26) % 26;


                int pairCost = min(cost1, cost2);

                operations += pairCost;

                left++;
                right--;
            }
            answer = min(answer, operations);
        }
        return answer;
    }
};