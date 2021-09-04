//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main()
{
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    char string1[200], string2[200], cont = 0;
    char alf[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'x', 'w', 'y', 'z'};
    char alfb[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'X', 'W', 'Y', 'Z'};

    printf("Informe a primeira string: ");
    scanf("%s", &string1);
    printf("Informe a segunda string: ");
    scanf("%s", &string2);

    printf("- - - Ordem Alfabetica - - - \n\n");

    for (cont; cont < 26; cont++)
    {
        if (string1[0] == alf[cont] || string1[0] == alfb[cont])
            printf("  1 - %s \n", string1);
        if (string2[0] == alf[cont] || string2[0] == alfb[cont])
            printf("  2 - %s \n", string2);
    }

    return 0;
}
