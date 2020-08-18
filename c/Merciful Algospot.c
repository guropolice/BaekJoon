#include<stdio.h>
int main()
{
	int i=0, k;
		//printf("정수입력 : ");
		scanf_s("%d", &i);
	if(i>0 && i<10)
	{
		for (k = 0; k < i; k++)
		{
			printf("Hello Algospot!\n");
		}
	}
	else 
	return 0;
}