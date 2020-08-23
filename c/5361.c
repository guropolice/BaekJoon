#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	float value[] = { 350.34,230.90,190.55,125.30,180.90 };
	float rifle, eye, ear, arm, leg, sum = 0;
	int test; //Å×½ºÆ® È½¼ö
	scanf("%d", &test);     
	
	for (int i = 0; i < test; i++) {
		scanf("%f %f %f %f %f", &rifle, &eye, &ear, &arm, &leg);
		sum = rifle * value[0] + eye * value[1] + ear * value[2] + arm * value[3] + leg * value[4];
		printf("$%.2f\n", sum);
	}
		
	return 0;
}