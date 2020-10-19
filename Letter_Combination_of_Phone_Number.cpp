class Solution {
public:
    const string alph[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};  //criando um vetor de strings que contem em cada posição as suas combinações

    void combination(vector<string>&result, string digits, string current, int index) //a string current será a combinação que estou tratando no momento
    {                                                                                //no caso do exemplo, primeiro será "", "a", "ad", "ae", "af" volta para o proximo valor de 2 = "b", "bd"......         
        if(index == digits.size())  //significa que chegamos no fim da combinação e dou um append no result
        {
            result.push_back(current);
        }
        else
        {
            string letters = alph[digits[index] - '0']; //letters vai receber a string do numero que estamos avaliando. por ex: o valor do char '2'  será "abc" (letters recebe o "abc")
            for(int i = 0; i < letters.size(); i++)    //para cada character de letters  
                combination(result, digits, current + letters[i], index+1); //executo recursivamente passando agora
        }
    }
    
    vector<string> letterCombinations(string digits) {
        vector<string>result; //vetor que armazenará todas as combinações possíveis (resultado)
        
        if(digits.size() == 0) //se for uma string vazia, então retorno o vetor vazio.
            return result;

        combination(result, digits, "", 0); //se não, passo para a função recursiva o vetor que conterá o resultado, a string digits, uma string vazia e o index 0
        return result;
    }
};