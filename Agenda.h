struct contato{
   char nome[30];
   char telefone[8];
   char celular[9];
   char endereco[20];
   struct contato* prox;
};

typedef struct contato Agenda;

Agenda* inserir(Agenda* c);
Agenda* remover(Agenda* c, char*);
Agenda* alterar(Agenda* c);
void exibir(Agenda* c);
void estado(Agenda* c);
void menu();
void minuscula(char);