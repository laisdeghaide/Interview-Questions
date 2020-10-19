class Solution {
public:
    int hammingDistance(int x, int y) {
        int bit = x^y; //this is operand XOR. it compares every two value if they are != return 1
        int count = 0;
        while(bit > 0)
        {
            if(bit&1) // return true only if bit == 1
                count ++;
             bit = bit>>1; //shifts to the right
        }

        return count;
    }
};