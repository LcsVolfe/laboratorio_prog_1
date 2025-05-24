#ifndef CLIENTE_H
#define CLIENTE_H

#define QTD_CLIENTES 10

typedef struct cliente {
    int id;
    char nome[200];
    char email[200];
} Cliente;


void insere_cliente();
void listar_clientes();
char pegaNomePeloId(int id_cliente);


#endif //CLIENTE_H
