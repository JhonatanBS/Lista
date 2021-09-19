#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ListaEncadeada.h"

Lista* insere(Lista* elemento,int v){
    Lista* aux = elemento;
    
         Lista* novo = (Lista*)malloc(sizeof(Lista));

         novo->valor= v;
         novo->next = elemento;
                      
    return novo;
}

int quantidade(Lista* elemento){
    tamanho=0;
    while (elemento != NULL){
        tamanho++;
        elemento = elemento->next;
    }
    return tamanho;
}

void imprime(Lista* elemento){
    printf("%c", 202);
   
   for(int i = 0; i<3;i++){
       printf("%c", 205);
   }
}


void cabecalho(int tam, Lista* elemento){
     int i;
     printf("%c", 202);
     //for()
}

void rodape(){

}