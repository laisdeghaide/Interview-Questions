class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> mp;
        
        for(int i = 0; i < strs.size(); i++) {
            string tmp = strs[i];
            
            sort(strs[i].begin(), strs[i].end());
            mp[strs[i]].push_back(tmp);
        }
        
        for(auto it : mp) {
            result.push_back(it.second);
        }
        
        return result;
    }
};