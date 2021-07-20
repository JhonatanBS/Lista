#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Agenda.c"

int main(){
    Agenda* C = NULL;
    C = inserir(C);
    C = inserir(C);
    exibir(C);
    return 1;
}