//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main () {
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    char string[200];

    printf("Informe a String: \n");
    scanf("%s", &string);

    // Imprima
    printf("A String informada foi: %s", string);

    return 0;
}

