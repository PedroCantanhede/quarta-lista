//Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função
int contadorNome(char nome[])
{
    int cont = 0;

    while (nome[cont] != '\0')
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
    char nome[200];

    printf("Informe o nome: ");
    scanf("%s", &nome);

    // Imprima
    printf("\n------ String ------ \n");
    printf("Nome: %s \n", nome);
    printf("Numero de letras no nome: %d \n", contadorNome(nome));

    return 0;
}
