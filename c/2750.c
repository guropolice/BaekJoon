#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n, num;
	int arr[1000] ;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (arr[i] < arr[j]) {
				num = arr[i];
				for (int k = i; k >= j; k--) {
					arr[k] = arr[k - 1];
				}
				arr[j] = num;
				break;
			}
		}
	}
	for (int i = 0; i < n; i++)
		printf("%d\n", arr[i]);
	return 0;
}