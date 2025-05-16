#include <stdio.h>
#include <string.h>
#define QTD_CLIENTES 10

char clientes[QTD_CLIENTES][50] = {
    "Cliente 1",
    "Cliente 2",
    "Cliente 3",
    "",
    "",
    "Cliente 6"
};
char produtos[10][50];





typedef struct cliente {
    char nome[200];
    char email[200];
} Cliente;
struct cliente clientes_struct[10];

printf("Nome do cliente:\n");
scanf("%s", clientes_struct[i].nome);











int qtd_clientes_cadastrados = 4;

void insere_cliente();
void insere_produto();
void excluir_clientes();
void listar_clientes();

void main() {

    // insere_cliente();
    // insere_cliente();
    // insere_cliente();
    excluir_clientes("teste");
    printf("======================\n");
    listar_clientes();
    return;
    int opcao;
    do {
        printf(
            "Selecione uma opcao:\n"
            "0 - para sair\n"
            "1 - insere cliente\n"
            "2 - insere produto\n"
            "3 - insere venda\n"
            "4 - listar clientes\n"
            "5 - remover clientes\n"
            );
        scanf("%d", &opcao);
        printf("Você digitou: %d\n", opcao);

        if (opcao == 1) {
            insere_cliente();
        }
        else if (opcao == 4) {
            listar_clientes();
        }
    } while (opcao != 0);

}

void insere_cliente() {
    int i = 0;
    while (strlen(clientes_struct[i].nome) > 0) {
        i++;
    }
    printf("Nome do cliente:\n");
    scanf("%s", clientes_struct[i].nome);
    printf("Email do cliente:\n");
    scanf("%s", clientes_struct[i].email);

}

void insere_produto() {
    printf("Funcao para salvar um produto\n");
}

void listar_clientes() {
    int i = 0;
    while (strlen(clientes[i]) > 0) {
        printf("%s\n", clientes[i]);
        i++;
    }
}

void excluir_clientes() {
    printf("Digite o nome do cliente a ser removido");

    int i = 0;
    while (strcmp(clientes[i], "Cliente 2") != 0) {
        i++;
    }
    strcpy(clientes[i], "");
}




