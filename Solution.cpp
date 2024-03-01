class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int best = 0;
        for (int i = 1; i < n - 1; i++) {
            for (int j = 1; j < m - 1; j++) {
                int sum = grid[i][j];
                for (int k = -1; k <= 1; k++) {
                    sum += grid[i-1][j+k];
                    sum += grid[i+1][j+k];
                }
                best = max(best, sum);
            }
        }
        return best;
    }
};
