class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int, int>qtd;
        vector<int>nondup;
        for(int i = 0; i < nums.size(); i++)
        {
            qtd[nums[i]]++;
        }
        for(auto i:qtd)
        {
            if(i.second == 1)
            {
                nondup.push_back(i.first);
            }
        }
        return nondup;
    }
};

//Time Complexity = O(n)
//Space Complexity = O(n) para o map + O(2) para o vect que sempre terá tamanho constante
//acho que space complexity tb é O(n)