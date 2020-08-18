
#include<stdio.h>
int main()
{
	int i = 0, k = 0, m,g ;
	int p;
	int sum=0;
	scanf_s("%d", &i);
	
	for (m = 0; m < i; m++)
	{
		scanf_s("%d", &k);
		for (g = 0; g < k; g++)
		{
			scanf_s("%d", &p);
			sum += p;
		}
		printf("%d\n", sum);
		sum = 0;   //sum 0으로 초기화
	}
	return 0;
}


