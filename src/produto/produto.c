#include <stdio.h>
#include <string.h>
#include "produto.h"

struct produto produtos_struct[QTD_PRODUTOS];
int ultimo_id_produto_cadastrado = 0;

void insere_produto() {
    int i = 0;
    while (strcmp(produtos_struct[i].nome, ""))
        while (strlen(produtos_struct[i].nome) > 0) {
            i++;
        }
    printf("Nome do produto:\n");
    scanf("%s", produtos_struct[i].nome);
    // printf("Email do produto:\n");
    // scanf("%s", produtos_struct[i].email);

    ultimo_id_produto_cadastrado++;
    produtos_struct[i].id = ultimo_id_produto_cadastrado;
}


void listar_produtos() {
    int i = 0;
    while (produtos_struct[i].id > 0) {
        printf("id: %d | nome: %s\n", produtos_struct[i].id, produtos_struct[i].nome);
        i++;
    }
}