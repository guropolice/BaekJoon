#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;		//��Ƽ�� ����
	int p[10];		//�÷��� ����
	int sum=0;	//���ᰡ���� �� �÷��� ��
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf(" %d",&p[i]);
		sum += p[i] - 1;
	}
	printf("%d\n", sum+1);
	return 0;
}