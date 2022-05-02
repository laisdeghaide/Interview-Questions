class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) return "";
        
        string result = "";
        sort(strs.begin(), strs.end());
        
        string a = strs[0], b = strs[strs.size() - 1];
        for(int i = 0; i < a.length(); i++) {
            if(a[i] == b[i])
                result += a[i];
            
            else 
                break;
        }
        
        return result;
    }
};