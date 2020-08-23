#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int x=0, y=0, w=0, h=0;
	scanf("%d", &x);
	scanf("%d", &y);
	scanf("%d", &w);
	scanf("%d", &h);
	if (h - y > w - x)
		printf("%d\n", w - x);
	if (h - y < w - x)
		printf("%d\n", h - y);
	return 0;
}
