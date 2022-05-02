class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0 || (x % 10 == 0 && x != 0)) // in case we have a number with only 2 digits like 20, 30, it will never be palindrome
            return false;
        
        int revert_x = 0;
        
        // only revert half of the number
        while(x > revert_x) {
            revert_x = revert_x * 10 + x % 10;
            x /= 10;
        }
        
        if(x == revert_x || x == revert_x / 10) //in case we are dealing with odd number
            return true;
        
        return false;
    }
};

// Time complexity: O(n/2) = O(n)
// Space complexity: O(1)