// Dado uma equipe composta por n pessoas, desejamos formar um time com x pessoas
// A forma de seleção das pessoas é atraves da pontuação delas
// pegar as k primeiras pontuacoes no vetor de pontuacao e as k ultimas
// dentre esses 2*k selecionados, pegar maior de todas para compor o time, até que o time se complete

long formacaoDeTime(vector<int> pontuacao, int tamanho_do_time, int k) {
    long result = 0;

    // cada pq conterá as k pessoas
    priority_queue<pair<int, int>>left, right;
    int l = -1, r = pontuacao.size();
    
    // preenchedo as pq com as k pontuaçoes
    for(int i=0; i<pontuacao.size(); i++) {
        if(i < k) {
            left.push({pontuacao[i], -i});
            l++;
        }

        else if(i > pontuacao.size() - k - 1)  {
            right.push({pontuacao[i], -i});
            r--;
        }
    }
    
    // criação do time
    while(tamanho_do_time--) {
        
        // quero pegar o max valor
        // se não houver ngm na pq da direita, ou o valor da esquerda for maior do que da direita, então pego da esquerda
        if(right.empty() || (!left.empty() && left.top() > right.top())){
            result += left.top().first;
            left.pop(); // removo o valor da pq
            
            // para não ocorrer overlap entre as pq
            // se ainda tiver pessoa para ser inserida na pq
            if(l < r-1) {
                l++;
                left.push({pontuacao[l], -l});
            }
        }
        
        // caso em que o maior valor está na pq da direita
        else if(left.empty() || (!right.empty() && left.top() <= right.top())) {
            result += right.top().first;
            right.pop();
            
            // vejo se posso inserir mais um valor na pq da direita
            if(l < r-1) {
                r--;
                right.push({pontuacao[r], -r});
            }
        }
    }
     
    return result;
}