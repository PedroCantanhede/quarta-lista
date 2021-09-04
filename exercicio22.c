//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main()
{
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    char mercadoria[200];
    float valor, desconto, avista;

    printf("---- Mercadoria ---- \n");
    printf("Nome: ");
    gets(mercadoria);
    printf("Valor: ");
    scanf("%f", &valor);

    desconto = valor * 0.1;
    avista = valor - (valor * 0.1);

    printf("\n\n ---- Info Mercadoria ---- \n");
    printf("- Nome: %s \n", mercadoria);
    printf("- Total: R$ %.2f \n", valor);
    printf("- Desconto: R$ %.2f \n", desconto);
    printf("- Valor com desconto: R$ %.2f \n\n", avista);

    return 0;
}
