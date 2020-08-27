#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned int n;
	scanf("%u", &n);
	int num [50];
	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}
	printf("%d\n", num[0]*num[n-1]);
	return 0;
}