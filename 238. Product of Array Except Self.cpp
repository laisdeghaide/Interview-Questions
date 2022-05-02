class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1, product_without_zeros = 1, count_zeros = 0;
        
        
        for(int i = 0; i < nums.size(); i++) {
            product *= nums[i];
           
            if(nums[i] != 0)
                product_without_zeros *= nums[i];
            
            else 
                count_zeros++;
        }
        
        if(count_zeros > 1) {
            for(int i=0; i <nums.size(); i++)
                nums[i] = 0;
        }
              
        
        else  {
            for(int i = 0; i < nums.size(); i++) {
                if(nums[i] != 0)
                    nums[i] = product / nums[i];
                else 
                    nums[i] = product_without_zeros;
            }
        }
        
        return nums;
    }
};

// Time Complexity O(N)
// Space Complexity O(1)