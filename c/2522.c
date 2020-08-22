/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
	int main()
	{
		int k, s, a, b;
		scanf("%d", &s);
		k = s;
		for (a = s - 1; a > 0; a--)
		{

			for (b = 0; b < k ; b++)
			{
				if (a > b )
					printf(" ");
				else
					printf("*");
			}
			printf("\n");
		}
		for (a = 0; a < s; a++)
		{

			for (b = 0; b < k; b++)
			{
				if (b < a )
					printf(" ");
				else
					printf("*");
			}
			printf("\n");
		}
		return 0;
	}
	*/