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
    int aux = 0, i, j, vezes = 0, k = 0;

    printf("Informe a cadeia A: ");
    gets(string1);
    printf("Informe a cadeia B: ");
    gets(string2);

    if (contadorString(string1) < contadorString(string2))
    {
        for (i = 0; i < contadorString(string2); i++)
        {
            if (string2[i] == string1[0])
            {
                aux = i;
                for (j = i; j < aux + contadorString(string1); j++)
                {
                    if (string1[k] == string2[j])
                        k++;
                }

                if (k == contadorString(string1))
                {
                    vezes++;
                    k = 0;
                }
            }
        }
    }
    else
    {
        printf("A cadeia A eh maior que a cadeia B, nao tendo ocorrencia");
    }

    printf("Vezes que a cadeia B possui a cadeia A: %d", vezes);

    return 0;
}
