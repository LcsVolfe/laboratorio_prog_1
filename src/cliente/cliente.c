#include <stdio.h>
#include <string.h>
#include "./cliente.h"

struct cliente clientes_struct[QTD_CLIENTES];
int ultimo_id_cliente_cadastrado = 0;

void insere_cliente() {
    int i = 0;
    while (strcmp(clientes_struct[i].nome, ""))
        while (strlen(clientes_struct[i].nome) > 0) {
            i++;
        }
    printf("Nome do cliente:\n");
    scanf("%s", clientes_struct[i].nome);
    // printf("Email do cliente:\n");
    // scanf("%s", clientes_struct[i].email);

    ultimo_id_cliente_cadastrado++;
    clientes_struct[i].id = ultimo_id_cliente_cadastrado;
}

void listar_clientes() {
    int i = 0;
    while (clientes_struct[i].id > 0) {
        printf("id: %d | nome: %s\n", clientes_struct[i].id, clientes_struct[i].nome);
        i++;
    }
}

char pegaNomePeloId(int id_cliente) {
    int i = 0;
    while (clientes_struct[i].id != id_cliente) {
        printf("id: %d | nome: %s\n", clientes_struct[i].id, clientes_struct[i].nome);
        i++;
    }

    printf("nome: %s\n", clientes_struct[i].nome);
    return clientes_struct[i].nome;

}