#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int c=0,i; // �Է� ��� ��
	scanf("%d", &c);
	char name[50][50]; //�Է��ϴ� �̸� ,2���� �迭 ���
	for ( i = 0; i < c; i++) {
		scanf("%s", name[i],20);

	}
	for ( i = 0; i < c; i++) {
		printf("Hello, %s\n", name[i]);
	}
	return 0;
}