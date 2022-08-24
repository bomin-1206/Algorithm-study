#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, i, sum = 0;
	scanf("%d", &n);
	for (i = 0; i <= n; i += 2) {
		sum += i;
	}
	printf("%d", sum);
	return 0;
}