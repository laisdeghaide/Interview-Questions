class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        
        if(nums.size() < 3)
            return {};
            
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size() - 2; ++i) {
            if(i == 0 || nums[i] != nums[i - 1]) {
                int j = i + 1, k = nums.size() - 1;
                
                while(j < k) {
                    int sum = nums[j] + nums[k] + nums[i];
                    if(sum == 0) {
                        result.push_back({nums[i], nums[j], nums[k]});
                        
                        // in case there is repeated values
                        while(j < k && nums[j] == nums[j + 1]) j++;
                        while(j < k && nums[k] == nums[k - 1]) k--;
                        
                        j++, k--;
                    }
                    
                    else if(sum > 0) {
                        k--;
                    }
                        
                    else 
                        j++;
                }
            }
        }
        
        return result;
    }
};

// Time Complexity O(n^2)
// Space Complexity O(n)