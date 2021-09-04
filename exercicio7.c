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
    char string1[200], string2[200];

    printf("Informe a Primeira String: ");
    scanf("%s", &string1);
    printf("Informe a Segunda String: ");
    scanf("%s", &string2);

    if (contadorString(string1) == contadorString(string2))
    {
        printf("A string %s e a string %s sao iguais.", string1, string2);
    }
    else
    {
        printf("A string %s e a string %s sao diferentes.", string1, string2);
    }

    return 0;
}
