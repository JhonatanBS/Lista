#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ListaEncadeada.h"

Lista* insere(Lista* elemento,int v){
    Lista* aux = elemento;
    
         Lista* novo = (Lista*)malloc(sizeof(Lista));

         novo->valor= v;
         novo->next = elemento;
    tamanho++;                  
    return novo;
}

int quantidade(Lista* elemento){
    while (elemento != NULL){
        tamanho++;
        elemento = elemento->next;
    }
    return tamanho;
}

void imprime(Lista* elemento, int tam){
    cabecalho(tam*5);
    //printf("%c", 186);
   
   while(elemento != NULL){
       printf("%c", 186);
       printf("  %d",elemento->valor);
       printf("  %c",186);
       printf("%c",32);
       printf("%c",186);
       printf("->");
       elemento = elemento->next;
   }
   printf("NULL");
   rodape(tam*5);
}


void cabecalho(int tam){
     int i, cinco=5,j=1;

     printf("%c", 201);
     for(i = 0; i< tam;i++){
        if(i == cinco*j){
            printf("%c",203);
            printf("%c",205);
            printf("%c",187);
            printf("%c",32);
            printf("%c",32);
            printf("%c",201);
            j++;
        }
        printf("%c",205);
     }
     printf("%c",203);
     printf("%c",205);
     printf("%c\n",187);
}

void rodape(int tam){
     int i, cinco=5,j=1;

     printf("\n%c", 200);
     for(i = 0; i< tam;i++){
        if(i == cinco*j){
            printf("%c",202);
            printf("%c",205);
            printf("%c",188);
            printf("%c",32);
            printf("%c",32);
            printf("%c",200);
            j++;
        }
        printf("%c",205);
     }
     printf("%c",202);
     printf("%c",205);
     printf("%c",188);   
}