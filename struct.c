#include <stdio.h>

int main () 
{

    struct dados_aluno //Tipo de Dado
    {
        char nome[10];
        int matricula;
        float nota;
    };

    struct dados_aluno aluno; //Definição

    printf("\n ---- LENDO OS DADOS DO ALUNO ---- \n\n");

    printf("Insira aqui o nome do aluno ");
    fgets(  aluno.nome, 10, stdin);

    printf("Insira aqui a matricula do aluno ");
    scanf("%d",&aluno.matricula);

    printf("Insira aqui a nota do aluno ");
    scanf("%f",&aluno.nota);

    printf("\n ----  OS DADOS DO ALUNO ---- \n\n");

    printf("%s",aluno.nome);
    printf("Matricula: %d\n",aluno.matricula);
    printf("A nota do %seh: %.1f\n",aluno.nome,aluno.nota);
    return 0;
}