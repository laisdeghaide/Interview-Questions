class Solution {
public:
    string addBinary(string a, string b) {
        string c = "";
        int size_a = a.size() - 1, size_b = b.size() - 1, carry = 0;

        while(size_a >= 0 || size_b >= 0)
        {
            int sum = carry; 
            
            if(size_a >= 0)
                sum += a[size_a] - '0'; //converto o char para string e armazeno na soma
            
            if(size_b >= 0)
                sum += b[size_b] - '0'; //faço o mesmo para o b
            
            c = to_string(sum % 2) + c;  // a soma pode ser 0, 1 ou 2. Então o resto pode ser 0 ou 1: 0 % 2 = 0, 1 % 2 = 1 e 2 % 2 = 0
            carry = sum / 2; // 0 / 2 = 0, 1 / 2 = 0 e 2 / 2 = 1
            
            size_a--;
            size_b--;
        }
        
        if(carry != 0)
            c = to_string(carry) + c;
        
        return c;
    }
};