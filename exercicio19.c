//Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função
int contadorString(char string[])
{
    int cont = 0;

    while (string[cont] != '\0')
    {
        cont++;
    }

    return cont;
}

int main()
{
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    char nome[200], nomeVelho[200], nomeNovo[200];
    int cont = 0, i = 0, idadeVelho, idadeNovo, idade;

    for (i; i < 10; i++)
    {

        printf("- - - - Pessoa %d - - - - \n", i + 1);
        printf("Nome: ");
        scanf("%s", &nome);
        printf("Idade: ");
        scanf("%d", &idade);

        if (i == 0)
        {
            idadeNovo = idadeVelho = idade;

            for (cont = 0; cont < contadorString(nome); cont++)
            {
                nomeNovo[cont] = nomeVelho[cont] = nome[cont];
            }

            nomeNovo[cont] = nomeVelho[cont] = '\0';
        }

        if (idade < idadeNovo)
        {
            idadeNovo = idade;

            for (cont = 0; cont < contadorString(nome); cont++)
            {
                nomeNovo[cont] = nome[cont];
            }

            nomeNovo[cont] = '\0';
        }
        else if (idade > idadeVelho)
        {
            idadeVelho = idade;

            for (cont = 0; cont < contadorString(nome); cont++)
            {
                nomeVelho[cont] = nome[cont];
            }

            nomeVelho[cont] = '\0';
        }
    }

    printf("\n\n ---- Pessoa mais velha ---- \n");
    printf("Nome: %s \n", nomeVelho);
    printf("Idade: %d \n", idadeVelho);

    printf("\n\n ---- Pessoa mais nova ---- \n");
    printf("Nome: %s \n", nomeNovo);
    printf("Idade: %d \n", idadeNovo);

    return 0;
}
