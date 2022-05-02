class Solution {
public:
    bool detectCapitalUse(string word) {
        
        for(int i = 1; i < word.length(); i++) {
            if((islower(word[0]) && isupper(word[i])) || //comparing the first letter with all other in the word
                (isupper(word[1]) != isupper(word[i]))) // comparing the second letter with all other*
                return false;
        }
        return true;
    }
};

// comparing the second letter with all other* cause if second letter is upper but 3+ is not then false or 
// if second letter not upper but 3+ are, then false too

