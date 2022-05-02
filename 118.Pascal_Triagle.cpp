class Solution {
public:
    vector<int> auxGenerate(vector<int> &subPascal) {
        vector<int> subPascalAux;
        
        subPascalAux.push_back(subPascal[0]);
        
        for(int i = 1; i < subPascal.size(); i++) {
            subPascalAux.push_back(subPascal[i]+subPascal[i-1]);
        }
        
        subPascalAux.push_back(subPascal[subPascal.size() - 1]);
        
        return subPascalAux;
    }
    
    vector<vector<int>> generate(int numRows) {
        int i = 0;
        vector<int> subPascal;
        vector<vector<int>> pascal;  

        while(++i <= numRows) {
            if(i == 1) {
                subPascal.push_back(i);
                pascal.push_back(subPascal);
            }
                
            else if(i == 2) {
                subPascal.push_back(i-1);
                pascal.push_back(subPascal);
            }
                
            else {
                subPascal = auxGenerate(subPascal);
                pascal.push_back(subPascal);
            }    
        }
        
        return pascal;
    }
};