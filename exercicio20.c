//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main()
{
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    char modelo[20][4];
    int consumo[4], economico = 1000;
    int poiscao, i = 0;

    for (i; i < 4; i++)
    {

        printf("--- Modelo %d --- \n", i + 1);
        printf("Informe o modelo: ");
        scanf("%s", modelo[i]);
        printf("Informe o consumo: ");
        scanf("%d", &consumo[i]);

        if (consumo[i] < economico)
        {
            economico = consumo[i];
            poiscao = i;
        }
    }

    printf("Modelo: %s \n", modelo[0]);
    printf("- Consumo (1000Km) %d -", consumo[0] * 1000);

    printf("Modelo:: %s \n", modelo[1]);
    printf("- Consumo (1000Km) %d -", consumo[1] * 1000);

    printf("Modelo: %s \n", modelo[2]);
    printf("- Consumo (1000Km) %d -", consumo[2] * 1000);

    printf("Modelo: %s \n", modelo[3]);
    printf("- Consumo (1000Km) %d -", consumo[3] * 1000);

    printf("\n\nCarro com modelo mais economico: %s \n", modelo[poiscao]);

    return 0;
}
