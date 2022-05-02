class Solution {
public:
    
    vector<vector<int>> generate(int numRows) {
        vector<int> subPascal;
        vector<vector<int>> pascal;
        
        pascal.push_back({1});
        
        if(numRows == 1) return pascal;
        

        for(int i = 1; i < numRows; i++) {
           subPascal.push_back(1);
            
            for(int j = 0; j < pascal[i-1].size()-1; j++){
                subPascal.push_back(pascal[i-1][j] + pascal[i-1][j+1]);
            }
            
            subPascal.push_back(1);
            pascal.push_back(subPascal);
            subPascal.clear();
        }
        
        return pascal;
    }
};

/* PRIMEIRA ABORDAGEM

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
*/