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
    int tamanho;

    printf("Informe a Primeira String: ");
    scanf("%s", &string1);
    printf("Informe a Segunda String: ");
    scanf("%s", &string2);

    printf("\n - Primeira String modificada: ");

    tamanho = contadorString(string1);

    for (int i = tamanho; i >= 0; i--)
    {
        if (string1[i] == 'A' || string1[i] == 'a')
            string1[i] = 42;
        printf("%c", string1[i]);
    }

    printf("\n - Segunda String modificada: ");

    tamanho = contadorString(string2);

    for (int i = tamanho; i >= 0; i--)
    {
        if (string2[i] == 'A' || string2[i] == 'a')
            string2[i] = 42;
        printf("%c", string2[i]);
    }

    return 0;
}
