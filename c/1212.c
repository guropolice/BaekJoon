
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char* str1[8] = { "000","001","010","011","100","101","110","111" };
	char* str2[8] = { "","1","10","11","110","101","110","111" };
	char chs[10];
	//char *input=&chs;

	scanf("%s", chs);
	//문자열>정수 변경

	int size = strlen(chs);  //배열 길이 계산
	for (int i = 0; i < size; i++) {
		int str = chs[i] - '0';
		if (i == 0)
			printf("%s", str2[str]);
		else
			printf("%s", str1[str]);
	}
	printf("\n");
}