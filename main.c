#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\nPercentual de numeros pares no intervalo\n");

    int x;
    int total = 0;
    int pares_intervalo = 0;

    while(x != 0)
    {
        printf("\nDigite um numero natural (ou 0 para encerrar): ");
        scanf("%i",&x);

        if(x != 0)
        {
            total++;
        }

        if(x % 2 == 0 && x >= 1000 && x <= 10000)
        {
            pares_intervalo++;
        }
    }

    float percPares = (float)pares_intervalo / total * 100;
    printf("\nPercentual de numeros pares no intervalo [1000, 10000]: %2.f%%", percPares);

    return 0;
}
