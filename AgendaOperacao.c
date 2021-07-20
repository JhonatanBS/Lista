#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Agenda.c"

int main(){
    Agenda* C = NULL;
    int opcao;

    do{
       menu();
       printf("Escolha uma das opções:");
       scanf("%d",&opcao);

       switch(opcao){
         case 0:
         printf("Agenda Encerrada!");
             break;
         case 1:
         C = inserir(C);
             break;
         case 2:

             break;
         case 3:

             break;
         case 4:

             break;
         case 5:
         exibir(C);
             break;    

       }
    }while(opcao != 0);
    
    free(C);
    return 1;
}