#======= Força Bruta mas não tão força bruta=========
class Solution {
public:
    
    bool checkPrime(int value) {        
        if(value <= 1)
            return false;
        for(int i = 2; i*i <= value; i ++){
            if(value % i == 0)
                return false;
        }
        return true;   
    }
    
    int countPrimes(int n) {
        int counter = 0;
        for(int i = 1; i < n; i++)
        {
            if(checkPrime(i))
                counter ++;
        }
        return counter;
    }
};


//Time complexity = O(n^1/2) de o(N^2) consigo reduzir para n^1/2 com essa parte do código aqui "i*i <= value"



=========================Sieve of erastosthenes=============
algoritmo que retira todos os numeros multiplos daquele que estamos olhando, sendo assim n precisamos checar os multiplos, restando apenas os numeros que são primos.
Usa memoria extra 

class Solution {
public:
    int countPrimes(int n) {
        vector<bool>result(n, true); //initializing a vector with all true and size n 
        int count = 0;
        
        // checando os multiplos e marcando-os como false
        for(int i = 2; i * i < n; i++)
        {
            if(result[i] == true)  
            {
                for(int j = 2; j * i < n; j++)
                {
                    result[i * j] = false; //seta os multiplos como false
                }
            }
        }
        
        for(int i = 2; i < n; i++)
        {
            if(result[i] == true)
                count++;
        }
        return count;
    }
};

//Space complexity O(N)
//Time complexity O(n loglogn)
