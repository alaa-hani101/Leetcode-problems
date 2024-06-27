class Solution {
public:
         
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> mp; // val -> index
        for (int i=0;i<nums.size();i++)
        {
             int tmp =target-nums[i];
            if(mp.find(tmp) != mp.end())
            {
                return {mp[tmp],i};
            }
            mp.insert({nums[i],i});
        }
           return {};
    }
};
