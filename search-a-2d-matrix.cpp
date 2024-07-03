class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int lowrow = 0;
        int highrow = matrix.size() - 1;

        while (lowrow < highrow) {
            int mid = lowrow + (highrow - lowrow) / 2;

            if (matrix[mid][0] < target) {
                lowrow = mid + 1;
            } else {
                highrow = mid - 1;
            }
            if (matrix[mid][0] == target) {
                return true;
            }
            if (matrix[mid][0] < target && target < matrix[mid + 1][0]) {
                lowrow = mid;
                break;
            }
        }

        int lowcol = 0;
        int highcol = matrix[0].size() - 1;

        while (lowcol <= highcol) {
            int mid = lowcol + (highcol - lowcol) / 2;
            if (matrix[lowrow][mid] == target) {
                return true;
            }
            if (matrix[lowrow][mid] < target) {
                lowcol = mid + 1;
            } else {
                highcol = mid - 1;
            }
        }

        return false;
    }
};
