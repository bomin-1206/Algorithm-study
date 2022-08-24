#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char n, n1 = 'a';
	scanf("%c", &n);
	while (n1 <= n) {
		printf("%c ", n1++);
	}
	return 0;
}