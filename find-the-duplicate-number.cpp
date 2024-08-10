class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> temp;
        for (auto a : nums) {
            temp.push_back(a);
        }
        sort(temp.begin(), temp.end());
        int res = 0;
        for (int i = 1; i < temp.size(); i++) {
            if (temp[i] == temp[i - 1]) {
                res = temp[i];
                i = temp.size();
            }
        }

        return res;
    }
};
