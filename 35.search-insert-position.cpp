class Solution {
public:
    int binarySearch(vector<int>& nums, int target, int low, int high) {
        if(high >= low) {
            int mid = low + (high - low) / 2;
            
        if(nums[mid] == target) // in case of the target already exists in vector
            return mid;

        // Search the left half
        if (nums[mid] > target)
            return binarySearch(nums, target, low, mid - 1);

        // Search the right half
        return binarySearch(nums, target, mid + 1, high);
        }

        return low;
    }
    
    int searchInsert(vector<int>& nums, int target) {
            return binarySearch(nums, target, 0, nums.size() - 1);
    }
};