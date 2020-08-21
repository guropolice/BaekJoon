/*
#include<stdio.h>
int main()
{
	int m, k, star;
	scanf_s("%d", &k);
	for (m =0;m<k; m++)
	{
		for (star = k; star > 0; star--)
		{
			if (star > m +1)
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}
	return 0;
}
*/


/*
#include<stdio.h>
int main()
{
	char star;
	star = '*';
	for (int i = 0; i < 10; i++)
	{
		for (int k = 10; k > 0; k--)
		{
			if (k > i + 1)
				printf(" ");
			else
				printf("%c", star);
		}

		printf("\n");
	}
	return 0;
}
*/