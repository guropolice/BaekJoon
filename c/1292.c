/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a=0, b=0;   //구간의 시작과 끝
	int sum=0;          //구간에 속하는 숫자의 합
	int num[50] = { 1,2,2,3,3,3,4,4,4,4,5,5,5,5,5,6,6,6,6,6,6,7,7,7,7,7,7,7,8 };
	scanf("%d %d", &a, &b);
	for (int i = a; i <= b; i++) {
		sum += num[i - 1];
	}
	printf("%d\n", sum);
	return 0;
}
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b, count = 0, limit = 1, ans = 0;
	scanf("%d %d", &a, &b);
	for (int i = 0; i < b; ++i, ++count) {
		if (count >= limit) {
			count = 0;
			++limit;
		}
		if (i >= a - 1)
			ans += limit;
	}
	printf("%d\n", ans);
}
