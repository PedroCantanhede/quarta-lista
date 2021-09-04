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

    printf("Informe a String: ");
    scanf("%s", &string);

    // Imprima
    printf("\n------ String ------ \n");
    printf("A String informada foi: %s \n", string);
    printf("O comprimento da String e: %d \n", contadorString(string));

    return 0;
}
