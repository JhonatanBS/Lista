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