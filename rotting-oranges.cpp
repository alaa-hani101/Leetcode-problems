class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int, int>> rotten;
        int freshCount = 0;
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j] == 2) {
                    rotten.push({i, j});
                } else if (grid[i][j] == 1) {
                    freshCount++;
                }
            }
        }
        
        vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        
        int minutes = 0;
        

        while (!rotten.empty() && freshCount > 0) {
            int size = rotten.size();
            for (int i = 0; i < size; ++i) {
                auto [x, y] = rotten.front();
                rotten.pop();
                for (auto [dx, dy] : directions) {
                    int nx = x + dx;
                    int ny = y + dy;
                    if (nx >= 0 && nx < n && ny >= 0 && ny < m && grid[nx][ny] == 1) {
                        grid[nx][ny] = 2;  
                        rotten.push({nx, ny});
                        freshCount--;  
                    }
                }
            }
            minutes++;
        }
        
        return freshCount > 0 ? -1 : minutes;
    }
};
