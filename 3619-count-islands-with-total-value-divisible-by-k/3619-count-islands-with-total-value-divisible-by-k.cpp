class Solution {
    int n, m;

    vector<vector<int>> direction = {
        {0, 1},
        {0, -1},
        {1, 0},
        {-1, 0}
    };

    long long dfs(int r, int c, vector<vector<int>>& grid) {
        long long sum = grid[r][c];

        grid[r][c] = 0; // Mark visited

        for (vector<int>& dir : direction) {
            int nrow = r + dir[0];
            int ncol = c + dir[1];

            if (nrow >= 0 && nrow < n &&
                ncol >= 0 && ncol < m &&
                grid[nrow][ncol] > 0) {

                sum += dfs(nrow, ncol, grid);
            }
        }

        return sum;
    }

public:
    int countIslands(vector<vector<int>>& grid, int k) {
        if (grid.empty() || grid[0].empty()) {
            return 0;
        }

        n = grid.size();
        m = grid[0].size();

        int count = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                if (grid[i][j] > 0) {
                    long long sum = dfs(i, j, grid);

                    if (sum % k == 0) {
                        count++;
                    }
                }
            }
        }

        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna