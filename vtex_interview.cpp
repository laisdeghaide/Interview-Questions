// pegar as infos de um produto 
// retorna uma string ou um erro
// pega as infos num banco de dados ou de uma estrutura mais rapida
// retornar o objeto do produto



getFromDB(string productId) return p


requestInfo getProductInfo(requestInfo p) {
    int cst = 100;
    unordered_map<productId, produto> id_produto;
    queue<productId> q;

    if(id_produto.count(productId) == 0) {
        if(q.size() <= cst) {
            productId topo = q.top(); 
            q.pop();

            id_produto[topo].erase();
        }

        id_produto[productId] = getFromDB(p);

        if(id_produto[productId] == NULL)
            return "erro";
    }
    
    return id_produto[productId];
}