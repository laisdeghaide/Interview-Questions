class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> nodup;

        for(int i = 0; i <  nums.size(); i++)
        {
            nodup[nums[i]]++; //for each value found on the vector I sum 1
        }
        for(auto i:nodup)
        {
            if(i.second == 1)
            {
                return i.first;
            }
            
        }
        return 0;
    }
};

----------------------------------------------------------------------
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = 0;
        for(auto i:nums)
            n ^= i;
        return n;    
    }
};

// in first value it does 0^i = i
//the i^n 
//if there is a repeated number xor will be i^i = 0