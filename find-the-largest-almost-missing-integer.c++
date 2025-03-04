class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        vector<int> freq(51,0);
        int _max = 0;
        int n = nums.size();

        for (int a : nums) {
            freq[a]++;
            _max = max(_max, a);
        }

        if (k == 1) {
            int mx = -1;
            for (int a : nums) {
                if (freq[a] == 1)
                    mx = max(mx, a);
            }
            return mx;

        }

        else if (k == n)
            return _max;

        else {
            if (freq[nums[0]] == 1 && freq[nums[n - 1]] == 1)
                return max(nums[n - 1], nums[0]);
            else if (freq[nums[0]] > 1 && freq[nums[n - 1]] > 1)
                return -1;
            else
                return freq[nums[0]] > 1 ? nums[n - 1] : nums[0];
        }
        return -1;
    }
};
