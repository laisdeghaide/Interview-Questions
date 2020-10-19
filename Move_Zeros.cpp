class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count_zero = 0;
        int size = nums.size();
        vector<int> nozero;
        for(int i=0; i < size; i++)
        {
            if(nums[i] == 0)
                count_zero++;
        } 
        for(int i = 0; i < size; i++)
        {
            if(nums[i] != 0)
                nozero.push_back(nums[i]);
        }
        while(count_zero--)
        {
            nozero.push_back(0);
        }
        for(int i = 0; i < size; i++)
        {
            nums[i] = nozero[i];
        }
    }
};

----------------------------------------------------------

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero_count = 0, size = nums.size();
        for(int i = 0; i < size; i++)
        {
            if(nums[i] != 0)
            {
                nums[zero_count] = nums[i]; 
                zero_count++;
            }
        }
        for(int i = zero_count; i < size; i++)
            nums[i] = 0;
    }
};

-------------------------------------------------------------

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int anchor = 0, explorer = 0;
        for(int explorer = 0; explorer < nums.size(); explorer++)
        {
            if(nums[explorer] != 0)
            {
                swap(nums[explorer], nums[anchor++]);
            }
        }
    }
};

