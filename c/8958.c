#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char point[80];
	int c;
	int hap=0;
	int plus=0;
	scanf("%d", &c);
	for (int i = 0; i < c; i++) {
		scanf("%s", point);
		for (int k = 0; k < strlen(point); k++) {
			if (point[k] == 'O') {
				plus++;
				hap += plus;
				
			}
			else 
				plus = 0;
			
		}
		printf("%d\n", hap);
		hap = 0;
		plus = 0;
	}
	return 0;
}