#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int t;  //�׽�Ʈ ����
	scanf("%d", &t);
	int n;  //�湮�ϴ� ���� ��
	scanf("%d", &n);
	int xi[20];  //������ ��ġ
	int sum = 0, space;
	int min, max = 0;
	for (int i = 0; i < t; i++) {
		for (int k = 0; k < n; k++) {
			scanf("%d", &xi[k]);
			sum += xi[k];
		}
		space = sum / n;
		sum = 0;
		space = 0;
		min = xi[0];
		for (int k = 0; k < n; k++) {
			if (min > xi[k])
				min = xi[k];
			else if (max < xi[k])
				max = xi[k];
		}
		int result = 2 * (max - space) + 2 * (space - min);
		printf("%d\n", result);
		min = 0;
		max = 0;
		result = 0;
	}
	return 0;
}