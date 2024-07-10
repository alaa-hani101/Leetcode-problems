class Solution {
public:
    int jump(vector<int>& nums) {
        int jump = 0, i = 0;
        int n = nums.size();

        while (i < n - 1) {
            if (i + nums[i] >= n - 1) {
                jump++;
                break;
            }
            int maxIndex = i + 1;
            int maxValue = 0;
            for (int j = i + 1; j < i + 1 + nums[i]; j++) {
                if (j + nums[j] > maxValue) {
                    maxIndex = j;
                    maxValue = j + nums[j];
                }
            }
            i = maxIndex;
            jump++;
        }
        return jump;
    }

}
;
