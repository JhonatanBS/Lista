#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "ListaEncadeada.c"

int main(){
    setlocale(LC_NUMERIC,"Portuguese");
    Lista *no = NULL;int opcao = 1;
    float numero;
//imprime(no);
    // printf("\u2654");
        do{
       //menu();
       printf("\nDigite um valor para o Menu:");
       scanf("%d",&opcao);

       switch(opcao){
           case 0:
           printf("\nPrograma Finalizado!!!");
           break;
           case 1:
           printf("Digite um numero para ser inserido:");
           scanf("%f",&numero);
           //numero = 5.55;
           no = insere(no, numero);
           break;
           case 2:
           //F=removeFila(F);
           break;
           case 3:
           printf("Digite o valor para ser removida da Fila:");
           //scanf("%d",&numero);
           //F=removeElemento(F,numero);
           break;
           case 4:
           //x = quantidade(no);
           //printf("O tamanho do vetor eh %d",x);
           
           break;
           case 5:
           imprime(no,tamanho);
           break;
       }
     }while(opcao != 0);//Fim do While
    return 1;

}