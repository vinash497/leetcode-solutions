class Solution {
public:
    long long countIntersectingIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<int> start(n),end(n);
        for(int i = 0;i < n;i++){
            start[i] = intervals[i][0];
            end[i] = intervals[i][1];
        }
        sort(start.begin(),start.end());
        sort(end.begin(),end.end());

        long long count = 0;
        int j = 0;

        for(int i = 0;i < n;i++){
            while(j < n && end[j] < start[i]){
                j++;
            }
            count +=i - j;
        }
        return count;
    }
};
