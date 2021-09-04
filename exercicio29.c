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
    char data[200];
    int dia, mes, ano;
    int invalido = 1;

    while (invalido)
    {
        invalido = 0;

        printf("- - - (Padrao: DD/MM/AAAA) - - - \n");
        printf("Informe a data: ");
        scanf("%s", data);

        if (contadorString(data) != 10)
        {
            invalido = 1;
        }
        else if (!(data[0] >= 48 && data[0] <= 57) || !(data[1] >= 48 && data[1] <= 57))
        {
            invalido = 1;
        }
        else if (!(data[3] >= 48 && data[3] <= 57) || !(data[4] >= 48 && data[4] <= 57))
        {
            invalido = 1;
        }
        else if (!(data[6] >= 48 && data[6] <= 57) || !(data[7] >= 48 && data[7] <= 57) || !(data[8] >= 48 && data[8] <= 57) || !(data[9] >= 48 && data[9] <= 57))
        {
            invalido = 1;
        }
    };

    dia = (data[0] - '0') * 10;
    dia += data[1] - '0';

    mes = (data[3] - '0') * 10;
    mes += data[4] - '0';

    ano = (data[6] - '0') * 1000;
    ano += (data[7] - '0') * 100;
    ano += (data[8] - '0') * 10;
    ano += data[9] - '0';

    printf(" \n- - - %d / %d / %d - - -", dia, mes, ano);

    return 0;
}
