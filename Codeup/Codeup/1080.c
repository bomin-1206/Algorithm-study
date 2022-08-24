#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, i, sum = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		sum += i;
		if (n <= sum) {
			printf("%d", i);
			return 0;
		}
	}
	return 0;
}