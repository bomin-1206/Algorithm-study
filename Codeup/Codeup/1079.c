#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char alp;
	do {
		scanf("%c ", &alp);
		printf("%c\n", alp);
	} while (alp != 'q');
	return 0;
}