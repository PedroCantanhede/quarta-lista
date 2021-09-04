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
    char string[200], palindromo[200];
    int j = 0, i = 0, c = 1, tamanho;

    printf("Informe a String: ");
    gets(string);

    for (i = 0; i < contadorString(string); i++, j++)
    {
        if (string[i] == ' ')
        {
            i++;
        }

        if (!(string[i] >= 65 && string[i] <= 90) && !(string[i] >= 97 && string[i] <= 122))
        {
            i = i + 2;
        }

        if (string[i] >= 65 && string[i] <= 90)
        {
            string[i] = string[i] + 32;
        }

        palindromo[j] = string[i];
    }

    palindromo[j] = '\0';

    tamanho = contadorString(palindromo) - 1;

    for (int i = 0, j = tamanho; i < contadorString(palindromo) / 2; i++, j--)
        if (palindromo[i] != palindromo[j])
        {
            c = 0;
        }

    if (c)
    {
        printf("A string e um palindromo.");
    }
    else
    {
        printf("A string nao e um palindromo.");
    }

    return 0;
}
