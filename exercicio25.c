//Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função
int contadorString(char str[])
{
    int cont = 0;

    while (str[cont] != '\0')
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
    int i = 0;

    printf("Informe a String: ");
    gets(string);

    printf("String Decifrada: ");
    for (i; i < contadorString(string); i++)
        printf("%c", string[i] + 3);

    return 0;
}
