//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main()
{
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    char string[200], n = '0';
    int cont = 0;

    printf("Informe a String: ");
    scanf("%s", &string);

    for (cont; string[cont] != '\0'; cont++)
    {
        if (string[cont] == n)
        {
            string[cont] = '1';
        }
    }

    printf("A string com 0`s trocados por 1 ficou: %s \n", string);

    return 0;
}
