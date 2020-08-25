#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char plate[50];  //입력받는 접시 수
	int high=10;		 //처음 접시 높이
	  
	scanf("%s", plate, sizeof(plate));

	for (int i = 1; i < strlen(plate); i++) {
		if (plate[i - 1] == plate[i])
			high += 5;
		else if(plate[i - 1] != plate[i])
			high += 10;
	}
	printf("%d\n", high);
	return 0;
}

