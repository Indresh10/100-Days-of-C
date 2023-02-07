#include <stdio.h>

void main()
{
    int k = 0;
    for (int i = 1; i <= 5; i++)
    {
        if (i % 2 == 0)
            k += i - 1;
        else
            k += i;
        for (int j = 1; j <= i; j++)
        {
            if (j != i)
                printf("%d*", k);
            else
                printf("%d", k);
            if (i % 2 != 0)
                k++;
            else
                k--;
        }
        printf("\n");
    }
}