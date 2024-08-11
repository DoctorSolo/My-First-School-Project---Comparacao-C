#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Cadastro{
char Nome[100];
int idade;
};

int main()
{
    struct Cadastro Dados[100];
    int c = 0;
    int E;
    int loop = 0;
    char pesquisa[100];
    do {printf("Deseja criar um novo cadastro? [1] se sim [0] se nao\n");
        scanf("%d",&E);
        if (E == 1){
            printf("Nome: ");   scanf("%s",Dados[c].Nome);
            printf("Idade: ");  scanf("%d",&Dados[c].idade);
            c = c + 1;
        } else{
        for (int i = 0; i < c;i++){
            printf("Nome[%d]: %s\n",i,Dados[i].Nome);
            printf("Idade[%d]: %d\n",i,Dados[i].idade);
            }
        }
    printf("Deseja sair do loop?\n");     scanf("%d",&loop);
    }while(loop == 0);

    printf("Qual nome quer pesquisar? ");   scanf("%s",pesquisa);
    int encontrou = 0;

    for(int i = 0; i < c; i++){
        if (strcmp(Dados[i].Nome, pesquisa) == 0){
            printf("Nome encontrado!\nNome: %s;\nIdade: %d",Dados[i].Nome,Dados[i].idade);
            encontrou = 1;
            break;
        }
        if (!encontrou){
            printf("Nome não encontrado!\n");
        }
    }
    return 0;
}
