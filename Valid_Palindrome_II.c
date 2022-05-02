class Solution {
public:
    bool isPalindrome(string &s, int i, int j) {
        while(i < j) {
            if(s[i] != s[j])
                return false;
            
            i++; 
            j--;
        }
      
        return true;
    }
    
    
    bool validPalindrome(string &s) {
        int size = s.length();
        
        for(int i = 0; i < (size)/2; i++) {
            if(s[i] == s[size - i - 1])
                continue;
            
            else {
                return isPalindrome(s, i+1, size - i - 1) || isPalindrome(s, i, size - i - 2);
            }
        }
        return true;
    }
};

// Time complexity: O(x+ y) = O(2N) = O(N), where x <= N, and y = (j - i) <= N
// Space complexity: O(1)