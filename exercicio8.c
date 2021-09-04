//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main()
{
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    char string[200], n = '1';
    int cont = 0, vezes = 0;

    printf("Informe a String: ");
    scanf("%s", &string);

    for (cont; string[cont] != '\0'; cont++)
    {
        if (string[cont] == n)
        {
            vezes++;
        }
    }

    if (vezes != 0)
    {

        printf("Quantidade de 1`s na string: %d", vezes);
    }
    else
    {
        printf("Nao foram encontrados 1's na string");
    }

    return 0;
}
