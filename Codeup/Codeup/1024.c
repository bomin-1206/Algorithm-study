#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int i;
	char str[30];
	scanf("%s", str);
	for (i = 0; str[i] != '\0'; i++) {
		printf("\'%c\'\n", str[i]);
	}
	return 0;
}