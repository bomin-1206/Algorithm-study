#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b, c, sum = 0;
	float avg = 0;
	scanf("%d %d %d", &a, &b, &c);
	sum = a + b + c;
	avg = (float)sum / 3;
	printf("%d\n%.1f", sum, avg);
	return 0;
}