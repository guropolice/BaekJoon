#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	int t;				//케이스 변수
	scanf("%d", &t);
	int rect[4][2];		//좌표 저장 배열
	int i = 0, k = 0, j = 0;
	while (j < t) {
		for (i = 0; i < 3; i++) {
			scanf("%d %d", &rect[i][k],&rect[i][k+1]);
		}
		rect[3][0] = rect[0][0];
		rect[3][1] = rect[0][1];
		if (rect[3][0] == rect[1][0])
			rect[3][0] = rect[2][0];
		else if (rect[3][0] == rect[2][0])
			rect[3][0] = rect[1][0];

		if (rect[3][1] == rect[1][1])
			rect[3][1] = rect[2][1];
		else if (rect[3][1] == rect[2][1])
			rect[3][1] = rect[1][1];

		printf("%d %d\n", rect[3][0], rect[3][1]);
		j++;
	}
	return 0;
}