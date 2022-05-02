struct Produto {
    string id;
    int qtd;
    double valor_produto;

    Produto(string idc, int qtdc, double valor){
        id = idc;
        qtd = qtdc;
        valor_produto = valor;
    }
};


double preco_total = 0;

unordered_map<string, Produto> carrinho; // id do produto e o produto
unordered_map<string, double> catalogo; // id do produto e o valor do produto
unordered_map<string, string> produto_vendedor; // id do produto e id do vendedor
unordered_map<string, double> comissao_vendedor; // id do vendedor e a comissao do vendedor


void adicionar(string id, int quantidade) {
    if(carrinho.count(id) == 0) {
        Produto p = new Produto(id, quantidade, catalogo[id]);
        carrinho[id] = p;
    }

    else {
        carrinho[id].qtd += quantidade;
    }

    comissao_vendedor[produto_vendedor[id]] += catalogo[id] * quantidade;
    preco_total += quantidade * catalogo[id];
}

void remover(string id, int quantidade) {
    if(carrinho.count(id) == 1) {
        if(quantidade > carrinho[id].qtd) { // tiro só o que tem, ou seja, fica zero
            preco_total -= carrinho[id].qtd * catalogo[id];
            comissao_vendedor[produto_vendedor[id]] -= catalogo[id] * carrinho[id].qtd;
            carrinho[id].qtd = 0;
        }

        else {
            preco_total -= quantidade * catalogo[id];
            comissao_vendedor[produto_vendedor[id]] -= catalogo[id] * quantidade;
            carrinho[id].qtd -= quantidade;
        }
    }

    else {
        //erro
    }
}

double exibirConta() {
    return preco_total;
}

double exibirComissao() {
    return comissao_vendedor;
}


///////////////////////////////////////////////////////
// vc tem uma string de dados, vc consegue acessar 2 funcoes: 1°: se tem um proxima, 2º pega o proximo elemento
// HASNEXTELEMENT()
// GETNEXT()
// vc tem tb uma cte k (integer) 
// devo pegar todos os elementos, p/ cada elemento que pego, tenho que dizer se ele apareceu nos k ultimos elementos
// EXEMPLO: 
// k = 3
// 1 2 3 1 1 3 2 4