#include <stdio.h>
#include "../cliente/cliente.h"
#include "../produto/produto.h"
#include "venda.h"

int ultimo_id_venda_cadastrada = 0;


void gerar_venda() {
    listar_clientes();

    int id_cliente;
    printf("Informe o ID cliente: \n");
    scanf("%d", &id_cliente);

    listar_produtos();
    ProdutoVenda produto_venda;

    printf("Informe o Id do produto: \n");
    scanf("%d", &produto_venda.id_produto);
    printf("Informe a quantodade do produto: \n");
    scanf("%d", &produto_venda.quantidade);


    ultimo_id_venda_cadastrada++;
    Venda venda;
    venda.id_nota_fiscal = ultimo_id_venda_cadastrada;
    venda.id_cliente = id_cliente;
    venda.produtos[0] = produto_venda;
    venda.valor_total =

    printf("");

}
