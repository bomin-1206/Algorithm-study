#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, i;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		if (i % 3 == 0)
			printf("X ");
		else
			printf("%d ", i);
	}
	return 0;
}