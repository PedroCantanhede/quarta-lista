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
    char string[200], modificado;
    int i = 0;

    printf("Informe a letra minuscula: ");
    gets(string);

    for (i; i < contadorLetras(string); i++)
    {
        modificado = string[i] - 32;
    }

    printf("Letra  Maiuscula: %c", modificado);

    return 0;
}
