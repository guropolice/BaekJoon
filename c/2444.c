/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int k, s, a, b;
	scanf("%d", &s);
	k = 2 * s - 1;
	for (a = s-1; a >0; a--)
	{

		for (b =0; b<k-1; b++)
		{
			if (a>b || b>=k-a)  
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
			if (b < a || b >= k - a)  
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}
	return 0;
}
*/