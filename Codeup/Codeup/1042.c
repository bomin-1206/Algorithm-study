#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b, n;
	scanf("%d %d", &a, &b);
	n = (float)a / b;
	printf("%d", n);
	return 0;
}