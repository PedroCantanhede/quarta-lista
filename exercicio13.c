//Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função
int contadorFrase(char frase[])
{
    int cont = 0;

    while (frase[cont] != '\0')
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
    char frase[1000];
    int i = 0, n = 0;

    printf("Informe a frase: ");
    gets(frase);

    for (i; i < contadorFrase(frase); i++)
    {
        if (frase[i] == 32)
        {
            n++;
        }
    }

    printf("Caracteres em branco: %d\n", n);

    return 0;
}
