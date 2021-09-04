//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main()
{
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    char nome[200], sexo;
    int idade;

    printf("Informe o nome: ");
    gets(nome);
    printf("Informe o sexo, sendo F - Feminino | M - Masculino: ");
    scanf("%c", &sexo);
    printf("Informe a idade: ");
    scanf("%d", &idade);

    if (sexo == 'F' || sexo == 'f' && idade < 25)
    {
        printf("O nome informado foi: %s | ACEITA", nome);
    }
    else
    {
        printf("O nome informado foi: %s | NAO ACEITA", nome);
    }

    return 0;
}
