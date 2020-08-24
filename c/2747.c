#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int change(int n)   //피보나치 수열을 계산하는 함수
{
	int num0 = 1, num1 = 1, result;
	if (n <= 2)
		return 1;
	else {
		for (int i = 2; i < n; i++) {
			result = num0 + num1;
			num0 = num1;      //num0에 num1값 대입
			num1 = result;    //num1에 result값 대입
		}
	}
	return result;
}
int main() {
	int k;     //n번째 피보나치 수
	scanf("%d", &k);
	printf("%d\n", change(k));
	return 0;
}