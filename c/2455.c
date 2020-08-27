#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int people[4][2];    //승객 출입 수
	int num[4];				//각 역에서 타고있는 총 사람수
	int max = 0;
	for (int i = 0; i < 4; i++) {
		scanf("%d %d", &people[i][0], &people[i][1]);
	}
	num[0] = people[0][1];
	num[1] = num[0] - people[1][0] + people[1][1];
	num[2] = num[1] - people[2][0] + people[2][1];
	num[3] = num[2] - people[3][0] ;
	for (int cnt = 0; cnt < 4; cnt++) {      //배열에서 최대값 구하는 방법
		if (max < num[cnt])
			max = num[cnt];
	}
	printf("%d\n", max);
	return 0;
}