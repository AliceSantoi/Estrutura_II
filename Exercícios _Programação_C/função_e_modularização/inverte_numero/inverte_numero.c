#include <stdio.h>
#include <stdlib.h>


void inverteNum(int num)
{
    int acumulador = 0;
    if (num >= 0)
    {
        do
        {
            acumulador = num % 10;
            printf("%d", acumulador);
            num /= 10;
        } while (num != 0);

        printf("\n");
    }
}
