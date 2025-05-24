#ifndef PRODUTO_H
#define PRODUTO_H

#define QTD_PRODUTOS 10

typedef struct produto {
    int id;
    char nome[200];
    double preco;
} Produto;


void insere_produto();
void listar_produtos();

#endif //PRODUTO_H
