class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> sum;
        int remaining;
        for(int i = 0; i < nums.size(); i++)
        {
            remaining = target - nums[i];
            if(sum.count(remaining))
                return {sum[remaining], i};
            sum[nums[i]] = i;
        }
        return {};
    }
};