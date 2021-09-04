//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main()
{
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    char nome[200], a;

    printf("Informe o nome: ");
    scanf("%s", &nome);

    a = nome[0];

    // Imprima

    if (a == 'a')
    {
        printf("O nome informado foi: %s", nome);
    }
    if (a == 'A')
    {
        printf("O nome informado foi: %s", nome);
    }

    return 0;
}
