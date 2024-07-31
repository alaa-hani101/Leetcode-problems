class Solution {
public:
    int visited[310][310];

    bool valid(int i, int n, int j, int m) {
        return i >= 0 && i < n && j >= 0 && j < m;
    }

    void dfs(vector<vector<char>>& grid, int i, int n, int j, int m) {
        if (!valid(i, n, j, m) || visited[i][j] || grid[i][j] == '0')
            return;

        visited[i][j] = 1;

        dfs(grid, i, n, j + 1, m);
        dfs(grid, i, n, j - 1, m);
        dfs(grid, i + 1, n, j, m);
        dfs(grid, i - 1, n, j, m);
    }

    int numIslands(vector<vector<char>>& grid) {
        int numberOfIsland = 0;

        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if (!visited[i][j] && grid[i][j] == '1') {
                    dfs(grid, i, grid.size(), j, grid[i].size());
                    numberOfIsland++;
                }
            }
        }
        return numberOfIsland;
    }
};
