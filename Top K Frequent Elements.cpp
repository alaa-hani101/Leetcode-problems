class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
     unordered_map<int, int> hash;
        for (int i : nums) hash[i]++;
        vector<pair<int, int>> inter;
        for (auto i : hash) {
            inter.push_back({i.second, i.first});
        }
        sort(inter.begin(), inter.end());
        reverse(inter.begin(), inter.end());
        vector<int> ans;
        for (int i = 0; i < k; ++i) {
            ans.push_back(inter[i].second);
        }

        return ans;
    
    }
};
