class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int total_letters[26] = {0};
        
        for(int i = 0; i < ransomNote.length(); i++) { // creating my auxiliar array
            int char_idx = ransomNote[i] - 'a';
            total_letters[char_idx]++;     
        }
        
        for(int i = 0; i < magazine.length(); i++) {
            int char_idx = magazine[i] - 'a';
            total_letters[char_idx]--;
        }
        
        for(int i = 0; i < ransomNote.length(); i++) {
            int char_idx = ransomNote[i] - 'a';
            
            if(total_letters[char_idx] > 0)
                return false;
            
        }
        
        return true;
    }
};

// Time complexity: O(m+n)
// Space complexity: O(26) = O(k)


/*
 bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> total_letters;
        
        for(int i = 0; i < ransomNote.length(); i++) { // creating my auxiliar hashmap
            total_letters[ransomNote[i]]++;     
        }
        
        for(int i = 0; i < magazine.length(); i++) {
                total_letters[magazine[i]]--;
        }
        
        for(int i = 0; i < ransomNote.length(); i++) {
            if(total_letters[ransomNote[i]] > 0)
                return false;
        }
        
        return true;
    }
    */