class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = nums[0], result = nums[0]; //soma e resultado inicialmente recebem o primeiro elemnto do array
        
        if(nums.size() == 1)
            return result;
        
        for(int i = 1; i <= nums.size() - 1; i++)
        {
            sum = max(nums[i], sum + nums[i]); //soma vai receber ou apenas o elemento ou a soma acumulada mais o elemento
            //por ex: [-2, -1] max(-1, (-2-1)) => max(-1, -3) = -1
            result = max(sum, result);
        }
        return result;
    }
};

//LIÇÕES: 
//checar se o array pode ter só valores negativos, checar edge cases como um unico elemnto no array