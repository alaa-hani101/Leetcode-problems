class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) {
            return 0;
        }

        int res = 1, tmp = 1;
        sort(nums.begin(), nums.end());

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i-1] + 1) {
                tmp++;              // current consecutive sequence length
                res = max(res, tmp); // update the longest sequence length
            } else if (nums[i] != nums[i-1]) {
                tmp = 1;              // reset the count if numbers are not consecutive
            }
        }
        return res;
    }
};
