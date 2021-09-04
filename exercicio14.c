//Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função
int contadorPalavra(char palavra[])
{
    int cont = 0;

    while (palavra[cont] != '\0')
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
    char p[1000];
    int i = 0;

    printf("Informe uma palavra com no maximo 50 letras: ");
    gets(p);

    for (i; i < contadorPalavra(p); i++)
    {
        p[i] = p[i] + 1;
        printf("%c ", p[i]);
    }

    return 0;
}
