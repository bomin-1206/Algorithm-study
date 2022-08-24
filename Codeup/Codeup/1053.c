#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	if (n == 1)
		printf("%d", !1);
	else
		printf("%d", !0);
	return 0;
}