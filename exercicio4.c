//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main()
{
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    char nome[200];
    int cont = 0, qnt;

    printf("Informe o nome: ");
    scanf("%s", &nome);

    // Imprima
    for (cont; cont < 4; cont++)
    {
        qnt = cont + 1;
        printf("%d - Letra: %c | ", qnt, nome[cont]);
    }

    return 0;
}
