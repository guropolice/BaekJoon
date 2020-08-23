#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;		//멀티탭 개수
	int p[10];		//플러그 개수
	int sum=0;	//연결가능한 총 플러그 수
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf(" %d",&p[i]);
		sum += p[i] - 1;
	}
	printf("%d\n", sum+1);
	return 0;
}