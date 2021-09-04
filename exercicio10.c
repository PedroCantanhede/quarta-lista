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
    int cont, tamanho;

    printf("Informe a String: ");
    scanf("%s", &string);

    tamanho = contadorString(string);

    printf("String de tras pra frente: ");

    for (cont = tamanho - 1; cont >= 0; cont--)
    {
        printf("%c", string[cont]);
    }

    return 0;
}
