class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) {
        // int n = grid.size();
        vector<vector<int>> ans(n, vector<int> (n));
        for(int i = 0;i < n;i++){
            for(int j = 0;j < n;j++){
                int newcol = (j - rowShift[i] + n) % n;
                int newrow = (i - colShift[newcol] + n) % n;

                ans[newrow][newcol] = grid[i][j];
            }
        }
        return ans;
    }
};