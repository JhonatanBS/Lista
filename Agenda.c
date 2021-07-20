#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Agenda.h"

Agenda* inserir(Agenda* c){
    Agenda* novo = (Agenda*)malloc(sizeof(Agenda));
    if(novo == NULL){
        printf("Erro na alocação Dinâmica");
        exit(1);
    }

    printf("Digite o nome do contato:");
    fflush(stdin);
    gets(novo->nome);
    printf("Digite o celular do contato:");
    fflush(stdin);
    gets(novo->celular);
    printf("Digite o endereço do contato:");
    fflush(stdin);
    gets(novo->endereco);

    novo->prox=c;
    return novo;
}

void exibir(Agenda* c){
    if(c == NULL){
        printf("\nAgenda Vazia!");
        return c;
    }
    Agenda* aux = c;

    while(aux != NULL){
        printf("\nNome:%s",aux->nome);
        printf("\nCelular:%s",aux->celular);
        printf("\nEndereço:%s",aux->endereco);
        aux = aux->prox;
    }
}

void menu(){
    printf("MENU\n 0 - Sair\n 1 - Inserir Contato\n 2 - Excluir Contato\n 3 - Alterar Contato\n");
    printf(" 4 - Pesquisar Contato\n 5 - Exibir Contato\n 6 - Estado da Agenda\n");
}