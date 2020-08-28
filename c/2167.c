#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int N, M, dp[301][301], arr[301][301], i, j, x, y;



int main() {

	scanf("%d %d", &N, &M);

	for (int p = 1; p <= N; ++p) {

		for (int q = 1; q <= M; ++q) {

			scanf("%d", &arr[p][q]);

		}

	}

	dp[1][1] = arr[1][1];

	for (int p = 1; p <= N; ++p) {

		for (int q = 1; q <= M; ++q) {

			if (p == 1 && q == 1) continue;

			if (p == 1) {

				dp[p][q] = dp[p][q - 1] + arr[p][q];

			}

			else if (q == 1) {

				dp[p][q] = dp[p - 1][q] + arr[p][q];

			}

			else {

				dp[p][q] = dp[p - 1][q] + dp[p][q - 1] - dp[p - 1][q - 1] + arr[p][q];

			}

		}

	}

	int T;

	scanf("%d", &T);

	while (T--) {

		scanf("%d %d %d %d", &i, &j, &x, &y);

		printf("%d\n", dp[x][y] - dp[x][j - 1] - dp[i - 1][y] + dp[i - 1][j - 1]);

	}

}

