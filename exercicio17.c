//Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função
int contadorLetras(char letras[])
{
    int cont = 0;

    while (letras[cont] != '\0')
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
    char string[200];
    int i = 0, posicao = 0;

    printf("Informe uma frase (utilize espacos): ");
    gets(string);

    for (i, posicao; i < contadorLetras(string); i++, posicao++)
    {
        if (string[posicao] == 32)
        {
            posicao++;
        }
        string[i] = string[posicao];
    }

    printf("String sem espacamento: %s", string);

    return 0;
}
