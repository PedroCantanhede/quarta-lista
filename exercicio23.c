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
    char s[200], c;
    int posicao, charEncontrado = 0, i = 0;

    printf("Informe a string: ");
    gets(s);

    printf("Informe o caractere: ");
    scanf(" %c", &c);

    printf("Informe a posicao: ");
    scanf("%d", &posicao);

    for (i = posicao; i < contadorString(s); i++)
    {
        if (s[i] == c)
        {
            printf("\n - Posicao do caractere informado: %d \n", i);
            charEncontrado = 1;
        }
    }

    if (!charEncontrado)
    {
        printf("Caractere nao encontrado na posicao %d", i);
    }

    return 0;
}
