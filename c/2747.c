#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int change(int n)   //�Ǻ���ġ ������ ����ϴ� �Լ�
{
	int num0 = 1, num1 = 1, result;
	if (n <= 2)
		return 1;
	else {
		for (int i = 2; i < n; i++) {
			result = num0 + num1;
			num0 = num1;      //num0�� num1�� ����
			num1 = result;    //num1�� result�� ����
		}
	}
	return result;
}
int main() {
	int k;     //n��° �Ǻ���ġ ��
	scanf("%d", &k);
	printf("%d\n", change(k));
	return 0;
}