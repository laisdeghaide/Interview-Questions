class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> romanVal {{'I', 1},
                                           {'V', 5}, 
                                           {'X', 10}, 
                                           {'L', 50}, 
                                           {'C', 100}, 
                                           {'D', 500}, 
                                           {'M', 1000}};
        
        int result = 0;
        
        for(int i = 0; i < s.length(); i++) {
            if(romanVal[s[i]] >= romanVal[s[i+1]])
                result += romanVal[s[i]];
            else 
              result -= romanVal[s[i]];
            
        }

        return result;
    }
};