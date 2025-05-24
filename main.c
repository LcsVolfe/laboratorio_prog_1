#include <stdio.h>
#include <string.h>
#include "src/cliente/cliente.h"
#include "src/produto/produto.h"
#include "src/venda/venda.h"


void main() {

    int opcao;
    do {
        printf(
            "Selecione uma opcao:\n"
            "0 - para sair\n"
            "1 - insere cliente\n"
            "2 - insere produto\n"
            "3 - insere venda\n"
            "4 - listar clientes\n"
            "5 - listar produtos\n"
            "6 - remover clientes\n"
            "7 - xxxxxxx\n"
            );
        scanf("%d", &opcao);
        printf("Você digitou: %d\n", opcao);

        if (opcao == 1) {
            insere_cliente();
        }
        else if (opcao == 2) {
            insere_produto();
        }
        else if (opcao == 3) {
            gerar_venda();
        }
        else if (opcao == 4) {
            listar_clientes();
        }
        else if (opcao == 5) {
            listar_produtos();
        }
        else if (opcao == 6) {
            int id_cliente;
            printf("Qual o id do cliente\n");
            scanf("%d", &id_cliente);
            pegaNomePeloId(id_cliente);
        }
    } while (opcao != 0);

}



