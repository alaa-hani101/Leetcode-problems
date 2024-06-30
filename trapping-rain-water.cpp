class Solution {
public:
    int trap(vector<int>& height) {

       if (height.empty()) return 0;

        int i = 0;
        int j = height.size() - 1;
        
        int maxLeft = height[i];
        int maxRight = height[j];
        
        int sum = 0;

        while (i < j) {
            if (maxLeft <= maxRight) {
                i++;
                maxLeft = max(maxLeft, height[i]);
                sum += maxLeft - height[i];
            } else {
                j--;
                maxRight = max(maxRight, height[j]);
                sum += maxRight - height[j];
            }
        }
        
        return sum;
    }
};
