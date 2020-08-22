#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main()
{
    int i = 0, j = 0, k = 0, l = 0, m = 0;
    int p;
    scanf("%d", &p);
    for (i = 0; i < p; i++)
    {
        for (j = 0; j <= i; j++)
            printf("*");
        for (k = 1; k < p - i; k++)
            printf(" ");
        for (l = 1; l < p - i; l++)
            printf(" ");
        for (m = 0; m <= i; m++)
            printf("*");
        printf("\n");
    }

    for (i = 1; i < p; i++)
    {
        for (j = 0; j < p - i; j++)
            printf("*");
        for (k = 1; k <= i; k++)
            printf(" ");
        for (l = 1; l <= i; l++)
            printf(" ");
        for (m = 0; m < p - i; m++)
            printf("*");

        printf("\n");
    }
}
