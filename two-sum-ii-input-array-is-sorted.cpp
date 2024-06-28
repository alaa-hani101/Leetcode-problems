class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int start=0,         // Initialize start to 0
        end=nums.size()-1,  // Initialize end to the last index   
        sum=nums[0]+nums[nums.size()-1];         // store sumo f first index and last index
        vector<int>res;
        while(sum != target){
            if(sum<target){
            start++;
            sum=nums[start]+nums[end];
            }
            else{
            end--;
            sum=nums[start]+nums[end];
            }

        }
        start++,end++;               // convert rest to one-indexed
        res.push_back(start);
        res.push_back(end);

        return res;
    }
};
