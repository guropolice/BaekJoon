#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char plate[50];  //�Է¹޴� ���� ��
	int high=10;		 //ó�� ���� ����
	  
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

