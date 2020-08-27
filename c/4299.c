#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int p = 0, m = 0;
	int w, d;
	scanf("%d %d", &p, &m);
	w = (p + m) / 2;
	d = (p - m) / 2;
	if ((p + m) % 2 != 0 || (p - m) % 2 != 0)
		printf("%d\n", -1);
	else {
		if (w >= 0 && d >= 0) {
			if (w >= d)
				printf("%d %d\n", w, d);
			else
				printf("%d %d\n", d, w);
		}
		else
			printf("%d\n", -1);
	}
	return 0;
}