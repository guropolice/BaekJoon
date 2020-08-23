#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int c=0,i; // 입력 사람 수
	scanf("%d", &c);
	char name[50][50]; //입력하는 이름 ,2차원 배열 사용
	for ( i = 0; i < c; i++) {
		scanf("%s", name[i],20);

	}
	for ( i = 0; i < c; i++) {
		printf("Hello, %s\n", name[i]);
	}
	return 0;
}