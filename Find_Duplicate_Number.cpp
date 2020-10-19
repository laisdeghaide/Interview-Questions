class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int>dup;
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(dup.count(nums[i]))
                return nums[i];
            
            dup.insert(nums[i]);
        }
        
        return -1;
    }
};