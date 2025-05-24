cmake_minimum_required(VERSION 3.31)
project(lab_1_vendas C)

set(CMAKE_C_STANDARD 11)

add_executable(lab_1_vendas
        main.c
        src/cliente/cliente.c
        src/produto/produto.h
        src/produto/produto.c
        src/venda/venda.h
        src/venda/venda.c)
