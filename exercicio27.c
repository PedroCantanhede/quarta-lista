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
    char string1[200], string2[200];
    int retorno = 1, i, j;

    printf("Informe a Primeira String: ");
    gets(string1);
    printf("Informe a Segunda String: ");
    gets(string2);

    if (contadorString(string1) > contadorString(string2))
    {
        for (i = contadorString(string1) - contadorString(string2), j = 0; i < contadorString(string1); i++, j++)
        {
            if (string1[i] != string2[j])
            {
                retorno = 0;
                break;
            }
        }
    }

    if (retorno)
    {
        printf("O segundo texto esta contido no final da primeira!");
    }
    else
    {
        printf("O segundo texto nao esta contido no final da primeira!");
    }

    return 0;
}
