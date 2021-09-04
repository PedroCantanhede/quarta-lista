//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void main(void)
{
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    char alunos[5][30];
    char proc[30];
    char *retorno;
    char pergunta;

    int loop = 0, x = 0;

    for (x; x < 5; x++)
    {
        if (loop == 0)
        {
            printf("Informe o nome do aluno: ");
            scanf("%s", &alunos[x]);
            fflush(stdin);
            if (x < 4)
            {
                printf("Deseja continuar inserindo (S/N)? \n");
                scanf("%c", &pergunta);
                fflush(stdin);

                if (pergunta == ('n' || 'N'))
                    loop = 1;
            }
        }
    }
    printf("Qual nome esta procurando ?\n");
    scanf("%s", &proc);
    fflush(stdin);
    for (int x = 0; x < 4; x++)
    {
        if ((retorno = strstr(alunos[x], proc)) != NULL)
        {
            printf("- - - Dados Alunos - - -\n");
            printf("Nome: %s\n", alunos[x]);
            printf("Posicao na lista: %d", x);
        }
    }
}