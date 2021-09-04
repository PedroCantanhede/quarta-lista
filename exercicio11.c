//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main()
{
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    char string[200], novo[200];
    int cont = 0, cont2 = 0;

    printf("Informe a String: ");
    gets(string);

    while (string[cont] != '\0')
    {
        if (string[cont] == 'a' || string[cont] == 'A' || string[cont] == 'e' || string[cont] == 'E' || string[cont] == 'i' || string[cont] == 'I' || string[cont] == 'o' || string[cont] == 'O' || string[cont] == 'u' || string[cont] == 'U')
        {
            cont++;
            continue;
        }
        else
        {
            if (string[cont] != ' ')
            {
                novo[cont2++] = string[cont];
            }
        }
        cont++;
    }

    printf("String sem as vogais: %s \n", novo);

    return 0;
}
